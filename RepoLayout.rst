.. image:: images/TS_Logo.png
  :width: 200

=================
Repository Layout
=================
This is part of the official standard documentation of TalentSprint.
Except when explicitly specified, the contents are copyrighted intellectual
property of TalentSprint Private Limited.

Metadata
--------

:Document Code: TS-LD-iPEARL-000

:Description: Structure and Layout of the Content Repository

:Author: Asokan Pichai

:Version: 1.9.2

:Location: http://iPearl.talentsprint.com/repo/CoreDocs/RepoLayout.html

:See also: TS-LD-iPEARL-001 `Standards and Terminology`_

..  _`Standards and Terminology`: http://iPearl.talentsprint.com/repo/CoreDocs/Terminology.html

Purpose
+++++++
    This document specifies the following:
    
    1. Directory Structure of the Content Respository

Scope
+++++
    The entire Content Repository

Structure
+++++++++
:Repository Root: http://iPearl.talentsprint.com/repo Referred to as $REPO

:Store Root: http://iPearl.talentsprint.com/store Referred to as $STORE

Creating a directory for each program is the most convenient for faculty, as
the batch is the standard basis for logistics. But this can lead to duplication,
with attendant version related problems. 

For production and review the easiest way is based on specialization and
technology oriented structure, focusing on courses and modules.

We combine these two approaches. The public $REPO is organized program-wise.
Duplication is avoided by linking directories and files from the $STORE tree
to the $REPO tree.

$REPO
   * CoreDocs
   * Programs
      + AIML
	
    -PYTH
	 - PYES100
     - PYBA100
	 - PYPK100
	-MATH
	 - MAES100
	 - MATH101
	-MLAI
	 - AIPR100
     - CLML100
	 - DLNN100
	 - DLAD100
	-BUAN
	 - TSRM100
	    
      + CDS
	-PYTH
	 - PYES100
     - PYBA100
	 - PYPK100
	-MATH
	 - MAES100
	 - STAT100
	 - PROB100
	 - LINA100
	 - CALC100
	-CDSP
	 - CDSP100
    -MLAI
	 - CLML100
     - DLNN100
     - DLAD100
	-DENG
	 - DENG100
	-BUAN
	 - TSRM100
	 - FINP100

$STORE
   * PYTH
      + **PYES100** PythonEssentials
      + **PYBA100** PythonBasics
      + **PYPK100** PythonPackages
   * MATH
      + **MAES100** MathEssentials
      + **MATH101** MathBasics
      + **STAT200** Statistics
      + **PROB200** Probability 
      + **LINA200** LinearAlgebra
      + **CALC200** Calculus
   * CDSP
      + **CDSP100** ComputationalDataScPractice
   * MLAI
      + **AIPR100** AIPrinciples
      + **CLML100** ClassicalML
      + **DLNN100** DeepLearning
      + **DLAD100** DeepLearningAdvanced
   * DENG
      + **DENG100** DataEngineering
   * BUAN
      + **TSRM100** TimeSeriesModels
      + **FINP100** FinancePortfolio	
  
CoreDocs
++++++++
This directory is meant for meta-documents -- that is documents about
the repository itself -- and general documents.

Programs
++++++++
This is the actual repository of content for each program. There is one
directory for each program and subdirectories for courses below and 
subsubdirectories for modules. Each type of artefact will have a directory
under each module, where one or more files per session will be stored.

Contents of Program Level Directories
+++++++++++++++++++++++++++++++++++++
    1. Program Design Document
    #. Program Mindmap
    #. Program Schedule(s)
    #. Course Directories

Contents of Course Level Directories
++++++++++++++++++++++++++++++++++++
    1. Course Design Document
    #. Course Mindmap
    #. Student Guide
    #. Trainer Guide
    #. Assessment Instructions
    #. Question Bank
    #. Module Directories

Contents of Module Level Directories
++++++++++++++++++++++++++++++++++++
    1. Module Design Document
    #. Module Mindmap
    #. Session Plan
    #. Session Directories

Contents of Session Level Directories
+++++++++++++++++++++++++++++++++++++
    1. Session design document
    #. Mindmaps
    #. Presentations
    #. Videos
    #. Workbook

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
    * Two character Sequence Code - 13, 23, 33 etc. Mostly useful for
      videos as there are multiple videos for a session. So will be
      11 in all other cases. The first character is the sequence and
      the second identifies how many are there.
    * DOT
    * Extension -- pdf, mp4 ...

Examples
^^^^^^^^
:AIML-BUAN-03-VDO-12.mp4: 
    * AIML Course
    * Business Analytics Module
    * Session 3
    * Video 1 of 2

:CDS-MLAI-02-DECK-11.pdf:
    * CDS Course
    * Machine Learning & AI Module
    * Session 2
    * Presentation Deck 1 of 1
