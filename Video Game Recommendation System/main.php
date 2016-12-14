<?php

require_once 'indexer.php';

//Start indexing all files and write to file
echo "Starting to index now\n";
$indexer = new Indexer();
$indexer->write_index_to_file();
echo "Finished indexing\n";