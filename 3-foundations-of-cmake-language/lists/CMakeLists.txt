set(cats sphynx toyger ragdoll)
set(dogs "poodle;golden retriever;husky;pug")
set(languages "C C++ C# Java Rust")

message(${dogs})
message("")
message(${cats})
message("")

# prints out cat list
foreach(cat IN LISTS cats)
    message("meow, ${cat}")
endforeach()

message("")

# prints out dog list
foreach(dog IN LISTS dogs)
    message("bark, ${dog}")
endforeach()

message("")

# prints out language list
foreach(language IN LISTS languages)
    message("${languages}")
endforeach()

message("")

# adding more items to list
list(APPEND cats burmese bombay)
list(APPEND dogs chihuahua)
list(APPEND languages "html css xml")

# prints out cat list
foreach(cat IN LISTS cats)
    message("meow, ${cat}")
endforeach()

message("")

# prints out dog list
foreach(dog IN LISTS dogs)
    message("bark, ${dog}")
endforeach()

message("")

# prints out language list
foreach(language IN LISTS languages)
    message("${language}")
endforeach()