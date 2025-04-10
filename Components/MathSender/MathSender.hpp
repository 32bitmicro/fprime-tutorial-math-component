// ======================================================================
// \title  MathSender.hpp
// \author asloan
// \brief  hpp file for MathSender component implementation class
// ======================================================================

#ifndef MathSender_HPP
#define MathSender_HPP

#include "Components/MathSender/MathSenderComponentAc.hpp"

namespace MathModule {

  class MathSender :
    public MathSenderComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object MathSender
      //!
      MathSender(
          const char *const compName /*!< The component name*/
      );

      //! Destroy object MathSender
      //!
      ~MathSender();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------

      //! Handler implementation for mathResultIn
      //!
      void mathResultIn_handler(
          const FwIndexType portNum, /*!< The port number*/
          F32 result /*!< 
      the result of the operation
      */
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Command handler implementations
      // ----------------------------------------------------------------------

      //! Implementation for DO_MATH command handler
      //! Do a math operation
      void DO_MATH_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          F32 val1, /*!< 
          The first operand
          */
          MathModule::MathOp op, /*!< 
          The operation
          */
          F32 val2 /*!< 
          The second operand
          */
      );


    };

} // end namespace MathModule

#endif
