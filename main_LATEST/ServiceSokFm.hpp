#pragma once
/******************************************************************************/
/* File   : ServiceSokFm.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceSokFm.hpp"
#include "CfgServiceSokFm.hpp"
#include "ServiceSokFm_core.hpp"
#include "infServiceSokFm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceSokFm:
      INTERFACES_EXMCALPORTED_SERVICESOKFM
      public abstract_module
   ,  public class_ServiceSokFm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceSokFm_Type* lptrConst = (ConstServiceSokFm_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICESOKFM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICESOKFM_CONST,       SERVICESOKFM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESOKFM_CONFIG_DATA, SERVICESOKFM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICESOKFM_CODE) DeInitFunction (void);
      FUNC(void, SERVICESOKFM_CODE) MainFunction   (void);
      SERVICESOKFM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceSokFm, SERVICESOKFM_VAR) ServiceSokFm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
