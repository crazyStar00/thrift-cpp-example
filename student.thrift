
struct student {
    1:i32 no,
    2:string name,
    3:i16 age
}

service serv {
    i32 put(1:student s),
    i32 tell_me_time(),
}
