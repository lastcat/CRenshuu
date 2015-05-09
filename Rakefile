def target_cpp_files(directory)
  Dir.glob("#{directory}/"+"zisshuu/" + "*.cpp")
end

task :default do
  test_files = (2..13).map{|i| target_cpp_files(i.to_s) }
  test_files.each do |test|
    test.each do |t|
      if(!test.empty?)
        sh "g++ -fprofile-arcs -ftest-coverage #{t} /usr/local/lib/libgtest.a -pthread -o #{t.split('.').first}"
        #sh "g++ -I$GTEST_PATH/include #{t} ~/Documents/gtest/libgtest.a ~/Documents/gtest/libgtest_main.a -o #{t.split('.').first}"
      end
    end
  end

  test_files.each do |test|
    test.each do |t|
      sh "./#{t.split('.').first}"
    end
  end
  sh "gcov *.gcda"
end

task :test_in_mac do
  test_files = (2..13).map{|i| target_cpp_files(i.to_s) }
  test_files.each do |test|
    test.each do |t|
      if(!test.empty?)
        #sh "g++ #{test} /usr/local/lib/libgtest.a -pthread -o #{test.split.first}"
        sh "g++ -fprofile-arcs -ftest-coverage -I$GTEST_PATH/include #{t} ~/Documents/gtest/libgtest.a ~/Documents/gtest/libgtest_main.a -o #{t.split('.').first}.out"
      end
    end
  end

  test_files.each do |test|
    test.each do |t|
      sh "./#{t.split('.').first}.out"
      sh "gcov *.gcda"
      #gcov
      #object_directory = t.split('.').first.split('/')
      #object_directory.pop
      #object_directory = object_directory.join('/')
      #h_file_name.pop
      #sh "gcov -I ./#{h_file_name.join('_')}.h"
      #sh "gcov -l ./#{t.split('.').first.split('/').last}.cpp -o #{object_directory}"
    end
  end
end
