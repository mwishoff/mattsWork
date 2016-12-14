import nltk
import math

# These are functions to modularize the code, so that main is as clean as possible.
# ii is the inverted index


def homework1_query(ii):
    print("")
    print("Results of the boolean query evaluation: ")
    print("asus, google")
    print(boolean_query_evaluation("asus", "Google", ii))
    print("screen, bad")
    print(boolean_query_evaluation("screen", "bad", ii))
    print("great, tablet")
    print(boolean_query_evaluation("great", "tablet", ii))


def homework2_query(ii):  # Complete
    print("\n")
    print("Results of the free text query evaluation: ")
    print("Query: nexus like love happy")
    free_text_parsing("NEXUS like love happy", ii)
    print("")

    print("Query: asus repair")
    free_text_parsing("asus repair", ii)
    print("")

    print("Query: 0(touch screen) fix repair")
    free_text_parsing("0(touch screen) fix repair", ii)
    print("")
    #
    print("Query: 1(great tablet) 2(tablet fast)")
    free_text_parsing("1(great tablet) 2(tablet fast)", ii)
    print("")
    #
    print("Query: tablet")
    free_text_parsing("tablet", ii)
    print("")


def homework4_query(ii):
    # battery screen speed
    print("Query: battery")
    free_text_parsing("battery", ii)
    print("")

    print("Query: screen")
    free_text_parsing("screen", ii)
    print("")

    print("Query: speed")
    free_text_parsing("speed", ii)
    print("")


def normalize(word):
    stemmer = nltk.stem.PorterStemmer()
    word = word.lower()
    word = stemmer.stem(word)
    return word


def boolean_query_evaluation(key1, key2, ii):
    docids = []
    docids2 = []

    key1 = normalize(key1)
    key2 = normalize(key2)

    value = ii.ii[key1]
    value2 = ii.ii[key2]

    for lst in value:
        docids.append(lst[0])

    for lst in value2:
        docids2.append(lst[0])

    valueList = docids
    valueList2 = docids2

    lengthList = len(valueList)
    lengthList2 = len(valueList2)

    answer = []
    indexer = 0
    indexer2 = 0

    while indexer2 < lengthList2 and indexer < lengthList:
        if valueList[indexer] == valueList2[indexer2]:
            answer.append(valueList[indexer])
            indexer += 1
            indexer2 += 1
        elif valueList[indexer] < valueList2[indexer2]:
            indexer += 1
        else:
            indexer2 += 1
    return answer


def proximity_operator_tf_idf(lst_of_tuples, file_array):
    doc_count = 0
    doc_freq = []
    term_freq = []
    term_count = 0
    added = []
    scores = []
    temp = []
    docSum = 0

    # print(lst_of_tuples)

    for lst in lst_of_tuples: # calculates correct doc_freq
        doc_count = 0
        for tup in lst:
            for file in file_array:
                if file.docID == tup[0]:
                    doc_count += 1
        doc_freq.append(doc_count)
    # print("doc_freq: ",doc_freq)

    for lst in lst_of_tuples:
        term_count = 0
        doc_id_prev = lst[0][0]
        for tup in lst:
            if doc_id_prev == tup[0]:
                term_count += 1
            else:
                term_freq.append(term_count)
                term_count = 1
                term_freq.append(term_count)

    if len(term_freq) == 0:
        for x in range(len(lst_of_tuples)):
            term_freq.append(1)

    # print("term_freq: ", term_freq)
    tupid = lst_of_tuples[0][0][0]
    Tcount = 0
    for file in file_array:
        for lst in lst_of_tuples:
            for tup in lst:
                # print("tupid: ", tupid)
                # print("tup[0: ", tup[0])
                if tupid != tup[0] and file.docID == tup[0]:
                    Tcount += 1
                    # print(Tcount)
                if file.docID == tup[0]:
                    docSum += proximity_score(term_freq[Tcount], doc_freq[0])
        scores.append((file.docID, docSum))
        docSum = 0

    return scores


def proximity_operator_scoring(bundle, ii):  # this function should return a (docID, score) list of tuples.
    # print("proximity_operator_scoring, under construction")
    proxyLength = bundle[0]
    term1 = bundle[1]  # if this isn't used anywhere I can just directly go bundle[1] for posting list
    term2 = bundle[2]  # if this isn't used anywhere I can just directly go bundle[2] for posting list
    answer = []
    # (docId, termFrequency, [Term Positions])
    postingListOne = ii.ii[term1]   # p1
    index_for_p1 = 0                # to get the entries from the hash entry
    postingListTwo = ii.ii[term2]   # p2
    index_for_p2 = 0                # to get the entries from the hash entry
    termPositionsOne = []           # pp1 in psuedo code
    index_for_pos1 = 0              # to get entries for term positions
    termPositionsTwo = []           # pp2 in psuedo code
    index_for_pos2 = 0              # to get entries for term positions
    tempList = []                   # l in psuedo code
    remList = []                    # removed incorrect resluts from tempList
    temp_list_index = 0             # indexer for tempList

    while index_for_p1 < len(postingListOne) and index_for_p2 < len(postingListTwo):

        if postingListOne[index_for_p1][0] == postingListTwo[index_for_p2][0]:  # if DocIDs are equal
            #  some really long thing
            tempList = []
            termPositionsOne = postingListOne[index_for_p1][2]  # get the term positions from hashEntry
            termPositionsTwo = postingListTwo[index_for_p2][2]  # get the term positions from hashEntry

            index_for_pos1 = 0
            index_for_pos2 = 0
            while index_for_pos1 < len(termPositionsOne):
                while index_for_pos2 < len(termPositionsTwo):
                    # print("proxyLength: ", int(int(proxyLength) + 1))
                    # print("pos1: ",termPositionsOne[index_for_pos1])
                    # print("pos2: ",termPositionsTwo[index_for_pos2])
                    if abs((int(termPositionsOne[index_for_pos1]) - int(termPositionsTwo[index_for_pos2]))) <= int(proxyLength) + 1:
                        # print("in append templist")
                        tempList.append(termPositionsTwo[index_for_pos2])
                    elif termPositionsTwo[index_for_pos2] > termPositionsOne[index_for_pos1]:
                        break
                    index_for_pos2 += 1

                # Deletes incorrect answers
                while len(tempList) != 0 and abs(tempList[0] - termPositionsOne[index_for_pos1]) > int(proxyLength) + 1:
                    del tempList[0]

                for pos in tempList: # append the group (docid, pos1, pos2) to the answer as a tuple.
                    answer.append((postingListOne[index_for_p1][0], termPositionsOne[index_for_pos1], pos))

                index_for_pos1 += 1
            index_for_p1 += 1
            index_for_p2 += 1
        elif postingListOne[index_for_p1][0] < postingListTwo[index_for_p2][0]:
            index_for_p1 += 1  # incriment the hashEntry for posting list 1
        else:
            index_for_p2 += 1  # incriment the hashEntry for posting list 2
    return answer


def proximity_score(term_freq, doc_freq): # this is going to have to change.
    # print("term_freq: ", term_freq)
    # print("doc_freq: ", doc_freq)
    # print("file: ", docID)
    answer = 0
    if term_freq > 0:
        answer = (1 + math.log10(term_freq)) * math.log10((10 / doc_freq))
    else:
        answer = 0
    # print(answer)
    return answer


def tf_idf_scoring(query_list, ii):
    sum_score = 0
    doc_scores = []
    file_array = ii.file_array
    for doc in file_array:
        for term in query_list:
            sum_score += score(term, doc, ii)

        doc_scores.append((doc.docID, sum_score))
        sum_score = 0
    return doc_scores


def score(term, doc, ii):
    hash_entry = ii.ii[term]
    term_freq = 0
    doc_freq = len(hash_entry)  # counts how many lists are in the hash entry which is the num of docs it is in.

    for lst in hash_entry:
        if doc.docID == lst[0]:
            term_freq = lst[1]

    if term_freq > 0:
        return (1 + math.log10(term_freq)) * math.log10((10/doc_freq))
    else:
        return 0


def free_text_parsing(string, ii):
    query_list = []
    proxy_bundle = []
    temp_bundle = []
    query_bundle = []
    newList = []
    newList2 = []
    newList3 = []
    count = 0
    length = 0
    bundle_sum = 0
    query_score = []
    # this will parse the examples given in question 2 part 3 of the homework.
    if "(" not in string:  # this part of the if takes care of cases where there are no special parameters.
        lst = string.split()

        for word in lst:
            query_list.append(normalize(word))

        scores = tf_idf_scoring(query_list, ii)
        scores.sort(key=lambda x: x[1])
        scores.reverse()
        for val in scores:
            print(val)
    else:  # this part will take care of cases where there are special parameters I.E "("
        query_list = string.split()
        for word in query_list:
            if "(" in word:
                length = word[0]
                word = word[2:]
                word = normalize(word)
                temp_bundle.append(length)
                temp_bundle.append(word)
                count += 2
            elif ")" in word:
                word = word[:-1]
                word = normalize(word)
                temp_bundle.append(word)
                count += 1
                if count >= 3:
                    proxy_bundle.append(temp_bundle)
                    temp_bundle = []
            else:
                word = normalize(word)
                query_bundle.append(word)

        relDocs = []
        for bundle in proxy_bundle:
            relDocs.append(proximity_operator_scoring(bundle, ii))

        # print(relDocs)
        proxyScores = proximity_operator_tf_idf(relDocs, ii.file_array)

        if len(query_bundle) != 0:
            query_score = tf_idf_scoring(query_bundle, ii)
            # print("Query score: ", query_score)

        for tup in query_score:
            newList.append(list(tup))

        for tup in proxyScores:
            newList2.append(list(tup))

        if len(query_score) != 0:
            counter = 0
            for lst in query_score:
                newList3.append((counter + 1, lst[1] + newList2[counter][1]))
                counter += 1
            # print(newList3)

            newList3.sort(key=lambda z: z[1])
            newList3.reverse()
            for val in newList3:
                print(val)
            # for x in newList3:
            #     print(tuple(x))
        else:
            proxyScores.sort(key=lambda z: z[1])
            proxyScores.reverse()
            for val in proxyScores:
                print(val)
        # print(newList)
        # print(newList2)
        # got my two bundles!
        # print("proxy bundle: ", proxy_bundle)
        # print("query_bundle: ", query_bundle)
