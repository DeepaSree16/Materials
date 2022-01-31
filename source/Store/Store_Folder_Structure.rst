.. image:: https://cdn.extras.talentsprint.com/CentralRepo/images/TS_updated_logo.png
  :width: 200

====================
Store Folder Layout
====================
This is part of the official standard documentation of TalentSprint.
Except when explicitly specified, the contents are copyrighted intellectual
property of TalentSprint Private Limited.

Metadata
--------
:Description: Structure and Layout of the Store Folder in the Central Content Repository

:Author: Surobhi Lahiri

Purpose
+++++++
    This document specifies the following:
    
    1. Folder Structure of the 'Store' Folder in the Central Content Respository

Scope
+++++
    The Store folder of the Central Content Repository

Structure
+++++++++

I. The Store folder contains the following 3-level folders, based within the scope of content in the FS, GP and XP programs in TalentSprint. It is the physical location of all TS program contents. The Store folder structure is as described below:

* Folder level 1: Topic folder: This is a broad topic category which exists as part of any TS program's content
  - The folder name consists of a 2 letter code in capitals
  - For example: 'AI' (Artificial Intelligence) is a level 1 folder title
* Folder level 2: Sub-topic folder: This is a sub-topic within a broad topic category
  - The folder name consists of a 3 letter code in capitals
  - For example: In the AI folder, 'CML' (ClassicalMachineLearning) is a level 2 folder title
  - It is not necessary that a Folder level 2 be always created in a Folder level 1.
* Folder level 3: Sub-sub topic folder: This is a single specific topic within a sub-topic category
  - The folder name consists of the complete name of the topic, without abbreviation, with initial letters capitalized and no space between subsequent words in the topic
  - For example: In AI, under the CML folder, 'LinearRegression' is a level 3 folder title
  - It is not necessary that a Folder level 3 be always created in a Folder level 2.

II. Folder titles in the Store folder are as listed below:

STORE

   * CP [PROFESSIONAL C PROGRAMMING]
      + **PCP** ProfessionalCProgramming

   * JP [JAVA PROGRAMMING]
      + **ECC** EveryoneCanCode
      + **COJ** CoreJava
      + **WTW** WeavingTheWebHTML+CSS+JS
      + **SQL** SimpleDatabase
      + **WJE** WebAppDevelopmentWithJEE
      + **SPF** SpringFramework
   
   * WD [WEB DEVELOPMENT MEAN & MERN STACK]
      + **WDA** WebDevelopment301
      + **WDB** WebDevelopment302
      + **WDC** WebDevelopment303

   * TE [TESTING]
   
   * AN [ANDROID]

   * DN [DOTNET]

   * BC [BUSINESS COMMUNICATION]
      + **REN** RemedialEnglish
         - Alpha
         - Beta
      + **BEN** BusinessEnglish
         - ProfessionalCommunication
         - Expositions+Discussions
         - Presentations
         - WritingSkills
      + **IOR** IndustryOrientation
      + **IPR** InterviewPreparation

   * AP [APTITUDE]
      + **WVA** VerbalAbility
      + **WRA** ReasoningAbility
      + **WQA** QuantitativeAbility

   * PY [PYTHON PROGRAMMING]
      + **PES** PythonEssentials
      + **PBA** PythonBasics
      + **PPK** PythonPackages
      + **PYA** Python101
      + **PYB** Python102
      + **PYC** Python103

   * MT [MATHS]
      + **MES** MathEssentials
      + **MBA** MathBasics
      + **STA** Statistics
      + **PRB** Probability 
      + **LIN** LinearAlgebra
      + **CAL** Calculus

   * DS [DATA SCIENCE]
      + **CDP** ComputationalDataScienceInPractice

   * AI [ARTIFICIAL INTELLIGENCE]
      + **CML** ClassicalMachineLearning
         - LinearRegression
         - LinearClassifier
	 - LogisticRegression
	 - PrinciplesofML
         - k-NearestNeighbours
	 - DataVisualization
	 - PrincipalComponentAnalysis
	 - DecisionTree
	 - Clustering
	 - PerformanceMetrics
	 - SupportVectorMachines
	 - EnsembleMethods
	 - GradientDescent
	 
      + **DLN** DeepLearning
	 - DeepLearningArchitectures
         - SpeechandAudio
         - ComputerVision
         - NaturalLanguageProcessing
      + **DLA** DeepLearningAdvanced
         - Deep Reinforcement Learning
      + **RLN** ReinforcementLearning
      + **MLA** MachineLearning201
      + **MLB** MachineLearning202
      + **MLC** MachineLearning203

   * DE [DATA ENGINEERING]
      + **DEN** DataEngineering

   * BA [BUSINESS ANALYTICS]
      + **TSM** TimeSeriesModels
      + **FPO** FinancePortfolio
   
   * IO [IoT]


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

:Refer to the Terminology.rst file in the Core_Docs to obtain the Artefact codes and Course Name codes

Examples
^^^^^^^^
:AIML-CML-03-VDO-1-2.mp4: 
    * AIML Program
    * Classical ML Module
    * Session 3
    * Video 1 of 2

:CDS-CDP-02-DECK-1-1.pdf:
    * CDS Program
    * Computational DataScience In Practice Module
    * Session 2
    * Presentation Deck 1 of 1
