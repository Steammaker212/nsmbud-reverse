/* sub_601FFC5C
 * address: 0x601FFC5C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FFC5C(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo
      & ~(1612708988 << v2)
      & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo) )
    {
      sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BD83C8;
      _cxa_guard_release(&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo);
    }
  }
  return (*(int (__fastcall **)(int *, int))sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo)(
           &sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo,
           a2);
}
