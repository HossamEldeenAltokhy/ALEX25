#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=main.c mKIT.c mDIO.c mLCD_8bits.c mLCD_4bits.c mExternalINT.c mKeypad.c mADC.c mTimer0.c mUART.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/main.o ${OBJECTDIR}/mKIT.o ${OBJECTDIR}/mDIO.o ${OBJECTDIR}/mLCD_8bits.o ${OBJECTDIR}/mLCD_4bits.o ${OBJECTDIR}/mExternalINT.o ${OBJECTDIR}/mKeypad.o ${OBJECTDIR}/mADC.o ${OBJECTDIR}/mTimer0.o ${OBJECTDIR}/mUART.o
POSSIBLE_DEPFILES=${OBJECTDIR}/main.o.d ${OBJECTDIR}/mKIT.o.d ${OBJECTDIR}/mDIO.o.d ${OBJECTDIR}/mLCD_8bits.o.d ${OBJECTDIR}/mLCD_4bits.o.d ${OBJECTDIR}/mExternalINT.o.d ${OBJECTDIR}/mKeypad.o.d ${OBJECTDIR}/mADC.o.d ${OBJECTDIR}/mTimer0.o.d ${OBJECTDIR}/mUART.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/main.o ${OBJECTDIR}/mKIT.o ${OBJECTDIR}/mDIO.o ${OBJECTDIR}/mLCD_8bits.o ${OBJECTDIR}/mLCD_4bits.o ${OBJECTDIR}/mExternalINT.o ${OBJECTDIR}/mKeypad.o ${OBJECTDIR}/mADC.o ${OBJECTDIR}/mTimer0.o ${OBJECTDIR}/mUART.o

# Source Files
SOURCEFILES=main.c mKIT.c mDIO.c mLCD_8bits.c mLCD_4bits.c mExternalINT.c mKeypad.c mADC.c mTimer0.c mUART.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=ATmega32A
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/main.o: main.c  .generated_files/flags/default/f894e47ef3e806fe40d4d07628f0675296a80a0 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/main.o.d" -MT "${OBJECTDIR}/main.o.d" -MT ${OBJECTDIR}/main.o -o ${OBJECTDIR}/main.o main.c 
	
${OBJECTDIR}/mKIT.o: mKIT.c  .generated_files/flags/default/fb0738f784b5bd8252c18ad49cabb15dcfe68161 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mKIT.o.d 
	@${RM} ${OBJECTDIR}/mKIT.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mKIT.o.d" -MT "${OBJECTDIR}/mKIT.o.d" -MT ${OBJECTDIR}/mKIT.o -o ${OBJECTDIR}/mKIT.o mKIT.c 
	
${OBJECTDIR}/mDIO.o: mDIO.c  .generated_files/flags/default/f6377e44321bff40c0997a9a7421612a93307c82 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mDIO.o.d 
	@${RM} ${OBJECTDIR}/mDIO.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mDIO.o.d" -MT "${OBJECTDIR}/mDIO.o.d" -MT ${OBJECTDIR}/mDIO.o -o ${OBJECTDIR}/mDIO.o mDIO.c 
	
${OBJECTDIR}/mLCD_8bits.o: mLCD_8bits.c  .generated_files/flags/default/8dcc5b1de6a6e196a7211e7ae9b800f79796709f .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mLCD_8bits.o.d 
	@${RM} ${OBJECTDIR}/mLCD_8bits.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mLCD_8bits.o.d" -MT "${OBJECTDIR}/mLCD_8bits.o.d" -MT ${OBJECTDIR}/mLCD_8bits.o -o ${OBJECTDIR}/mLCD_8bits.o mLCD_8bits.c 
	
${OBJECTDIR}/mLCD_4bits.o: mLCD_4bits.c  .generated_files/flags/default/bd875b866bdf71246934a476f17441323d10232 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mLCD_4bits.o.d 
	@${RM} ${OBJECTDIR}/mLCD_4bits.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mLCD_4bits.o.d" -MT "${OBJECTDIR}/mLCD_4bits.o.d" -MT ${OBJECTDIR}/mLCD_4bits.o -o ${OBJECTDIR}/mLCD_4bits.o mLCD_4bits.c 
	
${OBJECTDIR}/mExternalINT.o: mExternalINT.c  .generated_files/flags/default/ccb6fb084796cf951933ef2587c740cc450840de .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mExternalINT.o.d 
	@${RM} ${OBJECTDIR}/mExternalINT.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mExternalINT.o.d" -MT "${OBJECTDIR}/mExternalINT.o.d" -MT ${OBJECTDIR}/mExternalINT.o -o ${OBJECTDIR}/mExternalINT.o mExternalINT.c 
	
${OBJECTDIR}/mKeypad.o: mKeypad.c  .generated_files/flags/default/f0d2bb58db906bd2de8777d1aaa5eb797dd14a36 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mKeypad.o.d 
	@${RM} ${OBJECTDIR}/mKeypad.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mKeypad.o.d" -MT "${OBJECTDIR}/mKeypad.o.d" -MT ${OBJECTDIR}/mKeypad.o -o ${OBJECTDIR}/mKeypad.o mKeypad.c 
	
${OBJECTDIR}/mADC.o: mADC.c  .generated_files/flags/default/e5fbe3b29548a1cba4f38402119a4d594e38fce0 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mADC.o.d 
	@${RM} ${OBJECTDIR}/mADC.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mADC.o.d" -MT "${OBJECTDIR}/mADC.o.d" -MT ${OBJECTDIR}/mADC.o -o ${OBJECTDIR}/mADC.o mADC.c 
	
${OBJECTDIR}/mTimer0.o: mTimer0.c  .generated_files/flags/default/c60e6290bf0e00eb655bf2a39349a348ab2ee172 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mTimer0.o.d 
	@${RM} ${OBJECTDIR}/mTimer0.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mTimer0.o.d" -MT "${OBJECTDIR}/mTimer0.o.d" -MT ${OBJECTDIR}/mTimer0.o -o ${OBJECTDIR}/mTimer0.o mTimer0.c 
	
${OBJECTDIR}/mUART.o: mUART.c  .generated_files/flags/default/93a8d21e9c7cad2611bcf3386d8b56bf3ce7df4a .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mUART.o.d 
	@${RM} ${OBJECTDIR}/mUART.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mUART.o.d" -MT "${OBJECTDIR}/mUART.o.d" -MT ${OBJECTDIR}/mUART.o -o ${OBJECTDIR}/mUART.o mUART.c 
	
else
${OBJECTDIR}/main.o: main.c  .generated_files/flags/default/b30b12c5e818dc7971cb4a17ca6ba742e5b2bd90 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/main.o.d" -MT "${OBJECTDIR}/main.o.d" -MT ${OBJECTDIR}/main.o -o ${OBJECTDIR}/main.o main.c 
	
${OBJECTDIR}/mKIT.o: mKIT.c  .generated_files/flags/default/9865a2497fd11ff9e784245e7b31afbffab0afa .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mKIT.o.d 
	@${RM} ${OBJECTDIR}/mKIT.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mKIT.o.d" -MT "${OBJECTDIR}/mKIT.o.d" -MT ${OBJECTDIR}/mKIT.o -o ${OBJECTDIR}/mKIT.o mKIT.c 
	
${OBJECTDIR}/mDIO.o: mDIO.c  .generated_files/flags/default/d74669cc158de444061bb3527f59cc62958010c .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mDIO.o.d 
	@${RM} ${OBJECTDIR}/mDIO.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mDIO.o.d" -MT "${OBJECTDIR}/mDIO.o.d" -MT ${OBJECTDIR}/mDIO.o -o ${OBJECTDIR}/mDIO.o mDIO.c 
	
${OBJECTDIR}/mLCD_8bits.o: mLCD_8bits.c  .generated_files/flags/default/10e2ed9e99afa172010180e26288d51d8e9713f1 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mLCD_8bits.o.d 
	@${RM} ${OBJECTDIR}/mLCD_8bits.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mLCD_8bits.o.d" -MT "${OBJECTDIR}/mLCD_8bits.o.d" -MT ${OBJECTDIR}/mLCD_8bits.o -o ${OBJECTDIR}/mLCD_8bits.o mLCD_8bits.c 
	
${OBJECTDIR}/mLCD_4bits.o: mLCD_4bits.c  .generated_files/flags/default/be412e2d6b160d364f0c0225b5435aba09039199 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mLCD_4bits.o.d 
	@${RM} ${OBJECTDIR}/mLCD_4bits.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mLCD_4bits.o.d" -MT "${OBJECTDIR}/mLCD_4bits.o.d" -MT ${OBJECTDIR}/mLCD_4bits.o -o ${OBJECTDIR}/mLCD_4bits.o mLCD_4bits.c 
	
${OBJECTDIR}/mExternalINT.o: mExternalINT.c  .generated_files/flags/default/ef6c960bbb3767bf64c1f7c996b33159898c57e0 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mExternalINT.o.d 
	@${RM} ${OBJECTDIR}/mExternalINT.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mExternalINT.o.d" -MT "${OBJECTDIR}/mExternalINT.o.d" -MT ${OBJECTDIR}/mExternalINT.o -o ${OBJECTDIR}/mExternalINT.o mExternalINT.c 
	
${OBJECTDIR}/mKeypad.o: mKeypad.c  .generated_files/flags/default/d87dda4d8de4ef378ca7053ceed7df7bbca17241 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mKeypad.o.d 
	@${RM} ${OBJECTDIR}/mKeypad.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mKeypad.o.d" -MT "${OBJECTDIR}/mKeypad.o.d" -MT ${OBJECTDIR}/mKeypad.o -o ${OBJECTDIR}/mKeypad.o mKeypad.c 
	
${OBJECTDIR}/mADC.o: mADC.c  .generated_files/flags/default/be304c7d92bd30c9262493c061a9e4766803b4a2 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mADC.o.d 
	@${RM} ${OBJECTDIR}/mADC.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mADC.o.d" -MT "${OBJECTDIR}/mADC.o.d" -MT ${OBJECTDIR}/mADC.o -o ${OBJECTDIR}/mADC.o mADC.c 
	
${OBJECTDIR}/mTimer0.o: mTimer0.c  .generated_files/flags/default/e9b71447291d63622e1bb4afeafd151116398396 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mTimer0.o.d 
	@${RM} ${OBJECTDIR}/mTimer0.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mTimer0.o.d" -MT "${OBJECTDIR}/mTimer0.o.d" -MT ${OBJECTDIR}/mTimer0.o -o ${OBJECTDIR}/mTimer0.o mTimer0.c 
	
${OBJECTDIR}/mUART.o: mUART.c  .generated_files/flags/default/e038e53d21d14f653deba0ee80abd599015154c9 .generated_files/flags/default/2f9e58fd8ce1a2611b0e0fd33168db129b9285f3
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/mUART.o.d 
	@${RM} ${OBJECTDIR}/mUART.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mUART.o.d" -MT "${OBJECTDIR}/mUART.o.d" -MT ${OBJECTDIR}/mUART.o -o ${OBJECTDIR}/mUART.o mUART.c 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.map  -D__DEBUG=1  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"   -gdwarf-2 -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -gdwarf-3     $(COMPARISON_BUILD) -Wl,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -o dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group  -Wl,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1
	@${RM} dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.hex 
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.map  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -funsigned-char -funsigned-bitfields -Wall -gdwarf-3     $(COMPARISON_BUILD) -Wl,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -o dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group 
	${MP_CC_DIR}\\avr-objcopy -O ihex "dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}" "dist/${CND_CONF}/${IMAGE_TYPE}/Alex25_SPI_SLAVE.X.${IMAGE_TYPE}.hex"
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/default
	${RM} -r dist/default

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
