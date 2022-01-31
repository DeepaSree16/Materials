.. image:: https://cdn.extras.talentsprint.com/CentralRepo/images/TS_updated_logo.png
  :width: 200

=================
Repository Layout
=================
This is part of the official standard documentation of TalentSprint.
Except when explicitly specified, the contents are copyrighted intellectual
property of TalentSprint Private Limited.

Metadata
--------

:Description: Structure and Layout of the Content Repository

:Author: Asokan Pichai

:Version: 1.9.2

:See also: source --> Repo, source --> Store

Purpose
+++++++
    This document specifies the following:
    
    Directory Structure of the Content Respository

Scope
+++++
    The entire Content Repository

Structure
+++++++++

The public REPO is organized program-wise and contains LMS (Learning management system) Platform links of TS programs 

The internal STORE is organized content topic-wise and contains all the content files 

An example of the REPO and STORE folders organization is provided below:

REPO
   * Program LMS Links
         - AIML
         - WISE
         - FSD
         - CDS
         - WE
         - DLFA
         - ADSMI
                   
STORE
   * Java
      + **JPL** JavaProgrammingLanguage
      + **COJ** CoreJava 
      + **WEB** HTML+CSS+JS
      + **SQL** SimpleDatabase
      + **JEE** WebAppDevelopmentWithJEE
      + **SPNG** SpringFramework	
   * Testing
   * Android
   * dotNET
   * BizComm
      + **RE** RemedialEnglish
         - Alpha
         - Beta
      + **BE** BusinessEnglish
         - ProfessionalCommunication
         - Expositions+Discussions
         - Presentations
         - WritingSkills
      + **IO** IndustryOrientation
      + **IP** InterviewPreparation
   * Aptitude
      + **VS** VerbalSkills
      + **QR** Reasoning
      + **NA** Arithmetic

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

    * Program Code
    * Hyphen
    * Module Code
    * Hyphen
    * Two digit (Leading zero if needed) session number. 
      Session numbers start from one -- at a module level
    * Hyphen
    * Artefact Code
    * Hyphen
    * Two character Sequence Code with a hypen in between: 1-3, 2-3, 3-3 etc. Mostly useful for
      videos as there are multiple videos for a session. So will be
      11 in all other cases. The first character is the sequence and
      the second identifies how many are there.
    * DOT
    * Extension -- pdf, mp4 ...

Examples
^^^^^^^^
:BE-PC-03-VDO-1-2.mp4: 
    * Business English Program
    * Professional Communications Module
    * Session 3
    * Video 1 of 2

:COJ-CS-02-DECK-1-1.pdf:
    * Core Java Program
    * Conditional Statements Module
    * Session 2
    * Presentation Deck 1 of 1
