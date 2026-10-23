/* sead__CalculateTask__checkDerivedRuntimeTypeInfo_const
 * address: 0x608EBFF0   size: 208   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sead__CalculateTask__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo
      & ~(1619968008 << v2)
      & 1) == 0
    && _cxa_guard_acquire(&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo) )
  {
    sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BD83C8;
    _cxa_guard_release(&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo);
  }
  if ( a2 == &sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo )
    return 1;
  if ( ((unsigned int)&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo
      & ~(1619968100 << v2)
      & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo) )
    {
      sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BC00A4;
      _cxa_guard_release(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo);
    }
  }
  return a2 == &sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo;
}
