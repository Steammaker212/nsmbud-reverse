/* sead__CalculateTask__getRuntimeTypeInfo_const
 * address: 0x608EC0F0   size: 92   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sead__CalculateTask__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo
      & ~(1619968260 << v0)
      & 1) == 0
    && _cxa_guard_acquire(&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo) )
  {
    sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BD83C8;
    _cxa_guard_release(&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo);
  }
  return &sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo;
}
