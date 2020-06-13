##Technical writing experience
My Blog Posts
and My tutorials
and link to the idea of google colab

##Project proposal
Open source organization name: Bokeh

Open source project name: Bokeh

The name of your proposed technical writing project: Improving the Documentation Experience for Bokeh Developers

Current documentation state
Bokeh has done a tremendous job in documenting visualization use cases in the User Guide [1]. In the Reference [2] you can find all the API methods afforded by their models. The documentation has grown large and there is no easy way to find misspellings, repetition errors, or formatting issues in the text [3].

You can find dozens of code examples on how you might use Bokeh with your own data on GitHub. You can find some examples inline in the documentation but a lot of examples are missing [4]. Users may spend a considerable amount of time trying to figure out how a tool works without realizing there exists code they can reference. For example, you can use Themes to style a plot on Bokeh but these examples exist in the Reference when one would expect to find them in the User Guide [5][6].

Lastly, there is a section in the User Guide that thoroughly covers adding new capabilities to Bokeh with inline extensions. This is not the case for pre-built extensions. A small section detailing pre-built extensions and some commands exists but there is no guidance on how to build and manage them [7].

Proposed documentation state
Automated spell checking

Vale Linter [8] is available as a GitHub Action [9]. It checks for spelling, repetition, and styling issues on every pull request. Automated checks would find existing errors in the documentation to fix. This technology would prevent future errors from creeping into the documentation. Vale Linter can also enforce a consistent style across all documentation. For example, suggesting the term "JavaScript" over "Javascript," preferring active voice over passive voice, etc.

Additional cross-referencing across docs

Different parts of the documentation should link back and forth for a more complete discussion. Users interested in learning more about a topic should be able to navigate to the Reference from the User Guide. Users interested in seeing an example of an API method should also be able navigate to the User Guide from the Reference. All examples found in the GitHub respository should exist inline in the documentation.

A complete tutorial on pre-built Bokeh extensions

Bokeh is the standard when it comes to simple use cases for visualization. At the same time, advanced users with specific cases can add new capabilities with extensions. Bokeh provides the scaffolding for users to get started with pre-built extensions but the documentation for this scaffolding is lacking. A complete tutorial on setting up and creating pre-built extensions would make up for this. This tutorial would cover initializing and building extensions. It would also cover deploying and distributing them on npm, PiPy, and Anaconda.

Timeline
Pre-community bonding (present - 08/16)

Stay active as a contributor by tackling documentation issues
Start a friction log to keep track of areas of documentation needing improvements
Community bonding (08/17 - 09/13)

Establish project requirements
Schedule a time to meet with mentors
Agree on method of providing progress and updates
Week 1 (09/14 - 9/20)

Set up and test Vale to check for existing spelling and repetition errors
Identify terms to ignore that cause spelling errors like http, Bokeh, JupyterLab, etc.
Add a new text file with list of terms to ignore when checking for spelling errors
Week 2 (09/21 - 09/27)
Week 3 (09/28 - 10/04)

Identify suggested terms to use throughout documentation for consistency
Add a new style guide for suggested terms
Configure Vale to run on every pull request submitted to Bokeh
Week 4 (10/05 - 10/11)
Week 5 (10/12 - 10/18)

Start working on improving cross-referencing across Bokeh documentation
Identify existing Bokeh examples not shown in-line in documentation
Link examples in the documentation to the source code location on GitHub
Week 6 (10/19 - 10/25)
Week 7 (10/26 - 11/01)

Review topics covered in the User Guide
Identify topics to link to sections in the Reference Guide
Week 8 (11/02 - 11/08)

Create and customize a pre-built extension using the commands Bokeh provides
Write down steps taken, errors encountered, etc. and come up with a template for the tutorial
Week 9 (11/09 - 11/15)

Start on tutorial for pre-built extensions
Study existing extensions and how they’re deployed
Week 10 (11/16 - 11/22)

Deploy pre-built extensions
Add deployment instructions to tutorial
Wrap up tutorial
Week 11 (11/23 - 11/29)

Finish remaining tasks
Start working on Season of Docs project report
Week 12 (11/30 - 12/05)

Finish project report
Submit project report to Google
Commitments
I live in the Pacific Daylight Time (PDT) timezone. I have a full-time job so most of my commitments to Season of Docs will be throughout the week in the mornings/evenings and on weekends. If this schedule does not work with Bokeh or any of the mentors, I am open to finding suitable times to collaborate and connect.

References
User Guide - https://docs.bokeh.org/en/latest/docs/user_guide.html
Reference - https://docs.bokeh.org/en/latest/docs/reference.html
Documentation spelling and formatting - #8448
Include example code of PolyEditTool and PolyDrawTool Docs - #9962
Add mention of Themes to "Styling Visual Attributes" docs page - #9007
Reference Guide should link to Users Guide where appropriate. - #9363
Documentation for Prebuilt Extensions - #9523
Vale - https://errata.ai/vale/
Vale Linter - https://github.com/marketplace/actions/vale-linter
