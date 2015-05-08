#各ディレクトリに入る
#/zisshuuに入る
#g++ *.cpp /usr/local/lib/libgtest.a -pthread
#実行
def target_cpp_files(directory)
  Dir.glob("#{directory}/"+"zisshuu/" + "*.cpp")
end

task :default do
  test_files = (2..12).map{|i| target_cpp_files(i.to_s) }
  test_files.each do |test|
    test.each do |t|
      if(!test.empty?)
        sh "g++ #{t} /usr/local/lib/libgtest.a -pthread -o #{t.split('.').first}"
        #sh "g++ -I$GTEST_PATH/include #{t} ~/Documents/gtest/libgtest.a ~/Documents/gtest/libgtest_main.a -o #{t.split('.').first}"
      end
    end
  end

  test_files.each do |test|
    test.each do |t|
      sh "./#{t.split('.').first}"
    end
  end
end

task :test_in_mac do
  test_files = (2..12).map{|i| target_cpp_files(i.to_s) }
  test_files.each do |test|
    test.each do |t|
      if(!test.empty?)
        #sh "g++ #{test} /usr/local/lib/libgtest.a -pthread -o #{test.split.first}"
        sh "g++ -I$GTEST_PATH/include #{t} ~/Documents/gtest/libgtest.a ~/Documents/gtest/libgtest_main.a -o #{t.split('.').first}"
      end
    end
  end

  test_files.each do |test|
    test.each do |t|
      sh "./#{t.split('.').first}"
    end
  end
end
