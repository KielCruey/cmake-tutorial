# https://jeremimucha.com/2021/02/cmake-functions-and-macros/

# one list function
macro(printList ${list})
    foreach(item IN LISTS ${list})
        message("${item}")
    endforeach()
    message("")
endmacro()

set(cats sphynx toyger ragdoll)
set(dogs "poodle;golden retriever;husky;pug")
set(languages "C C++ C# Java Rust")

printList(cats)
printList(dogs)

# adding more items to list
list(APPEND cats burmese bombay)
list(APPEND dogs chihuahua)
list(APPEND languages "html css xml")

printList(cats)
printList(dogs)

