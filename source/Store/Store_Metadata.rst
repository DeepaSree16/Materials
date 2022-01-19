.. image:: images/TS_Logo.png
  :width: 200

====================
Store Folder Layout
====================
This is part of the official standard documentation of TalentSprint.
Except when explicitly specified, the contents are copyrighted intellectual
property of TalentSprint Private Limited.

Metadata
--------

:Document Code: TS-LD-iPEARL-000

:Description: Structure and Layout of the Store Folder in the Central Content Repository

:Author: Surobhi Lahiri

:Version: 1.0.0

Purpose
+++++++
    This document specifies the following:
    
    1. Directory Structure of the Store Folder in the Central Content Respository

Scope
+++++
    The Store folder of the Central Content Repository

Structure
+++++++++

:Store Root: http://iPearl.talentsprint.com/store Referred to as $STORE

The Store folder contains the following Content Modules and Content sub-modules, based within the scope of content in the FS, GP and XP programs in TalentSprint.

STORE
   * PYTH [PYTHON PROGRAMMING]
      + **PYES100** PythonEssentials
      + **PYBA100** PythonBasics
      + **PYPK100** PythonPackages

   * JAVA [JAVA PROGRAMMING]
      + **JAPL100** JavaProgrammingLanguage
      + **COJA100** CoreJava
      + **WEBS100** HTML+CSS+JS
      + **SQLD100** SimpleDatabase
      + **WJEE100** WebAppDevelopmentWithJEE
      + **SPNG100** SpringFramework

   * TEST [TESTING]
   
   * ANDR [ANDROID]

   * DOTN [DOTNET]

   * BIZC [BUSINESS COMMUNICATION]
      + **RENG100** RemedialEnglish
        --Alpha
        --Beta
      + **BENG100** BusinessEnglish
        --ProfessionalCommunication
        --Expositions+Discussions
	--Presentations
	--WritingSkills
      + **INOR100** IndustryOrientation
      + **INPR100** InterviewPreparation

    * APTD [APTITUDE]
      + **VRSK** VerbalSkills
      + **REAS** Reasoning
      + **ARIT** Arithmetic

   * MATH [MATHS]
      + **MAES100** MathEssentials
      + **MATH101** MathBasics
      + **STAT200** Statistics
      + **PROB200** Probability 
      + **LINA200** LinearAlgebra
      + **CALC200** Calculus

   * CDSP [COMPUTATIONAL DATA SCIENCE IN PRACTICE]
      + **CDSP100** ComputationalDataScPractice

   * MLAI [MACHINE LEARNING AND ARTIFICIAL INTELLIGENCE]
      + **AIPR100** AIPrinciples
      + **CLML100** ClassicalML
      + **DLNN100** DeepLearning
      + **DLAD100** DeepLearningAdvanced

   * DENG [DATA ENGINEERING]
      + **DENG100** DataEngineering

   * BUAN [BUSINESS ANALYTICS]
      + **TSRM100** TimeSeriesModels
      + **FINP100** FinancePortfolio


Artefact Naming Scheme
++++++++++++++++++++++
Each artefact will be named with a prefix as follows:

    * Course Code
    * Hyphen
    * Module Code
    * Hyphen
    * Two digit (Leading zero if needed) session number. 
      Session numbers start from one -- at a module level
    * Hyphen
    * Artefact Code
    * Hyphen
    * Two character Sequence Code - 1-3, 2-3, 3-3 etc. Mostly useful for
      videos as there are multiple videos for a session. So will be
      1-1 in all other cases. The first character is the sequence and
      the second identifies how many are there. 
    * DOT
    * Extension -- pdf, mp4 ...

Examples
^^^^^^^^
:AIML-BUAN-03-VDO-1-2.mp4: 
    * AIML Course
    * Business Analytics Module
    * Session 3
    * Video 1 of 2

:CDS-MLAI-02-DECK-1-1.pdf:
    * CDS Course
    * Machine Learning & AI Module
    * Session 2
    * Presentation Deck 1 of 1
