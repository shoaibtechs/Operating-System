from multiprocessing import Process

def f(name):
    print('hello', name)

def x(cast):
    print(cast)

def y(profession):
    print(profession)


if __name__ == '__main__':
    p = Process(target=f, args=('bob',))
    q = Process(target=x, args=('qureshi',))
    r = Process(target=y, args=('student',))
    
    p.start()
    p.join()
    
    q.start()
    q.join()
    
    r.start()
    r.join()
