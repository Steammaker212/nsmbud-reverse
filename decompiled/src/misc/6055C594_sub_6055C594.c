/* sub_6055C594
 * address: 0x6055C594   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055C594(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 2 )
  {
    v3 = dword_60CADCC0;
    if ( !dword_60CADCC0 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CADCC0 )
      {
        if ( ((unsigned int)&dword_60CADD04 & ~(1616233964 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CADD04) )
        {
          dword_60CADCC8 = (int)&unk_60CADCD0;
          dword_60CADCC4 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CADCCC = 50;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CADCC4);
          dword_60CADCC4 = (int)&off_60BFE688;
          v6 = dword_60CADCC8;
          if ( (char *)dword_60CADCC8 != "Pa_ReturnBtn_00, Pa_CoinEdit_00, Pa_CoinBattle_00" )
          {
            for ( i = 0; aPaReturnbtn00P[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPaReturnbtn00P[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CADCCC )
              i = dword_60CADCCC - 1;
            qmemcpy((void *)dword_60CADCC8, "Pa_ReturnBtn_00, Pa_CoinEdit_00, Pa_CoinBattle_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CADCC4 = (int)&off_60BFE670;
          _cxa_guard_release(&dword_60CADD04);
        }
        (*(void (__fastcall **)(int *))(dword_60CADCC4 + 12))(&dword_60CADCC4);
        sub_608FBCE4(&unk_60CADD08, dword_60CADCC8, 3);
        dword_60CADCC0 = (int)&unk_60CADD08;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CADCC0;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
