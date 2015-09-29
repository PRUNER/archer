//===------ RegisterPasses.h - Register the Polly passes *- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// Functions to register the Polly passes in a LLVM pass manager.
//
//===----------------------------------------------------------------------===//

#ifndef ARCHER_REGISTER_PASSES_H
#define ARCHER_REGISTER_PASSES_H

#include "llvm/IR/LegacyPassManager.h"

namespace llvm {
namespace legacy {
class PassManagerBase;
}
}

namespace archer {
void initializeArcherPasses(llvm::PassRegistry &Registry);
void registerArcherPasses(llvm::legacy::PassManagerBase &PM);
}
#endif
