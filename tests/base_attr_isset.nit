# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import end

interface Object
end

enum Int
	fun output is intern
	fun +(o: Int): Int is intern
end

enum Bool
	fun output is intern
end

class Integer
	readable writable var _val: Int
	init(val: Int) do _val = val
	fun output do _val.output
end

class Foo
	var _a1: Integer
	readable var _a2: Integer
	fun run
	do
		_a1.output
		a2.output
	end

	fun show(i: Int)
	do
		i.output
		(isset _a1).output
		(isset _a2).output
	end

	init
	do
		show(1)
		_a1 = new Integer(1)
		show(2)
		_a2 = new Integer(_a1.val + 1) #alt3# #alt4#
		show(3)
	end
		#alt3#
	init nop do end
end

class Bar
	super Foo
	var _a3: Integer#alt1# #alt2#
	#alt1#var _a3: Integer = new Integer(9000)
	#alt2#var _a3: nullable Integer
	redef fun run
	do
		_a1.output
		_a2.output
		_a3.output
	end

	redef fun show(i)
	do
		super
		(isset _a3).output
	end

	init
	do
		nop
		show(4)
		_a1 = new Integer(10)
		show(5)
		_a2 = new Integer(20)
		show(6)
		_a3 = new Integer(30)
		show(7)
	end
end

class Baz
	super Foo
end

#alt4# var b2 = new Baz
var f = new Foo
var b = new Bar
f.run
b.run
