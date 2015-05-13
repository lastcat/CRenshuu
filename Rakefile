def target_cpp_files(directory)
  Dir.glob("#{directory}/"+"zisshuu/" + "*.cpp")
end

task :default do
  test_files = (2..16).map{|i| target_cpp_files(i.to_s) }
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
  #sh "gcov *.gcda"
end

task :test_in_mac, 'file_name', 'test_file'
task :test_in_mac do |t, args|
  sh "g++ -I$GTEST_PATH/include #{args['file_name']} ~/Documents/gtest/libgtest.a ~/Documents/gtest/libgtest_main.a -o #{args['test_file']}"
  #なんかうまくいかない
  #sh "#{args['test_file']}"do |ok, status|
  #  p({ok: ok, status: status})
  #end
end
