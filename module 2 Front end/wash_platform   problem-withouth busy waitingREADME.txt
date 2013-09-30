wash-platform allocation ploblem
---------------------------------
<205112025>part

1 wash platform (Resource)
N number of student to wash their clothes (Processes)

problem:: How Resource should be allocated so that it can be fairly use by each processes ?
----------------------------------------------------------------------------------------------
1) synchronization without busy waiting


      -> process1 will come and if he founds that process0 is in running state then process1 will 
         go into block state.

      ->when process0 will finish its work then wake up the process1.
