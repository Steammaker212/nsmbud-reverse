/* sub_604574F0
 * address: 0x604574F0   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604574F0(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C9CF20 & ~(1615164812 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF20) )
  {
    dword_60C9CF1C = (int)&off_60BF942C;
    _cxa_guard_release(&dword_60C9CF20);
  }
  v4 = 1;
  if ( a2 != &dword_60C9CF1C )
  {
    if ( ((unsigned int)&dword_60C8C1FC & ~(1615164908 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C1FC) )
    {
      dword_60C8C1F8 = (int)&off_60BD83BC;
      _cxa_guard_release(&dword_60C8C1FC);
    }
    if ( a2 != &dword_60C8C1F8 )
    {
      if ( ((unsigned int)&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo
          & ~(1615165000 << v2)
          & 1) == 0
        && _cxa_guard_acquire(&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo) )
      {
        sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BD83C8;
        _cxa_guard_release(&`guard variable for'sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo);
      }
      if ( a2 != &sead__CalculateTask__getRuntimeTypeInfoStatic(void)::typeInfo )
      {
        if ( ((unsigned int)&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo
            & ~(1615165092 << v2)
            & 1) == 0
          && _cxa_guard_acquire(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo) )
        {
          sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BC00A4;
          _cxa_guard_release(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo);
        }
        return a2 == &sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo;
      }
    }
  }
  return v4;
}
