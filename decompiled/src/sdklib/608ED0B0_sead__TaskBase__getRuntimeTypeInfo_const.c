/* sead__TaskBase__getRuntimeTypeInfo_const
 * address: 0x608ED0B0   size: 92   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sead__TaskBase__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo
      & ~(1619972292 << v0)
      & 1) == 0
    && _cxa_guard_acquire(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo) )
  {
    sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BC00A4;
    _cxa_guard_release(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo);
  }
  return &sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo;
}
