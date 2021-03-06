
****************
Strategy Pattern
****************

`영어 <README.rst>`_ 로

+------------------------------------------------------------------------------+
|디자인 원칙                                                                   |
+==============================================================================+
|애플리케 이션에서 달라지는 부분을 찾아내고, 달라지지 않는 부분으로부터 분리   |
|시킨다.                                                                       |
+------------------------------------------------------------------------------+

*"바뀌는 부분은 따로 뽑아서 캡슐화 시킨다. 그렇게 하면 나중에 바뀌지 않는
부분에는 영향을 미치지 않은 채로 그 부분만 고치거나 확장할 수 있다."*

이 개념은 매우 간단하지만 다른 모든 디자인 패턴의 기반을 이루는 원칙이다. 모든
패턴은 '시스템의 일부분을 다른 부분과 독립적으로 변화시킬 수 있는' 방법을
제공하기 위한 것이니까...


+------------------------------------------------------------------------------+
|디자인 원칙                                                                   |
+==============================================================================+
|구현이 아닌 인터페이스에 맞춰서 프로그래밍 한다.                              |
+------------------------------------------------------------------------------+


MiniDuckSimulator
=================

Test
----

**Linux**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../content/
 make
 ./driver/testcontent

**Windows**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../content/
 (Open generated solution file with Visual Studio and build. And then test.)
 cd driver/Debug/
 ./testcontent.exe


Class Diagram
-------------

.. image:: content/imgs/Overview_of_MiniDuckSimulator.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: content/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram


+------------------------------------------------------------------------------+
|디자인 원칙                                                                   |
+==============================================================================+
|상속보다는 구성을 활용한다.                                                   |
+------------------------------------------------------------------------------+


+------------------------------------------------------------------------------+
|패턴 1. 스트래티지                                                            |
+==============================================================================+
|알고리즘 군을 정의하고 각각을 캡슐화하여 교환해서 사용할 수 있도록 만든다.    |
|스트래티지를 활용하면 알고리즘을 사용하는 클라이언트와는 독립적으로 알고리즘을|
|변경할 수 있다.                                                               |
+------------------------------------------------------------------------------+


.. image:: Strategy.jpg
   :scale: 50 %
   :alt: GoG's Strategy Pattern

