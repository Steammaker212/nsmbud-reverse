/* sub_603FC0B4
 * address: 0x603FC0B4   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603FC0B4(int *a1)
{
  char v1; // r12
  int v3; // r5

  if ( ((unsigned int)&dword_60C99DDC & ~(1614790860 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C99DDC) )
  {
    dword_60C99DD8 = (int)&off_60BF942C;
    _cxa_guard_release(&dword_60C99DDC);
  }
  v3 = 1;
  if ( a1 != &dword_60C99DD8 )
  {
    if ( ((unsigned int)&dword_60C8C1FC & ~(1614790956 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C1FC) )
    {
      dword_60C8C1F8 = (int)&off_60BD83BC;
      _cxa_guard_release(&dword_60C8C1FC);
    }
    if ( a1 != &dword_60C8C1F8 )
    {
      if ( ((unsigned int)&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo
          & ~(1614791048 << v1)
          & 1) == 0
        && _cxa_guard_acquire(&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo) )
      {
        sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BD83C8;
        _cxa_guard_release(&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo);
      }
      if ( a1 != &sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo )
      {
        if ( ((unsigned int)&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo
            & ~(1614791140 << v1)
            & 1) == 0
          && _cxa_guard_acquire(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo) )
        {
          sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BC00A4;
          _cxa_guard_release(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo);
        }
        return a1 == &sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo;
      }
    }
  }
  return v3;
}
