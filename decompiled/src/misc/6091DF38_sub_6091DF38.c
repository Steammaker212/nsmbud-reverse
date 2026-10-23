/* sub_6091DF38
 * address: 0x6091DF38   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091DF38(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // r0
  int v7; // r6
  int v8; // r4
  int v9; // r5

  v4 = *(_DWORD *)(FIELD_U32(a1, 4) + 12);
  if ( a2 == 1 )
  {
    sub_6091D9B0(*(_DWORD *)(FIELD_U32(a1, 4) + 12));
  }
  else if ( (FIELD_U8(v4, 8) & 2) != 0 )
  {
    v5 = dword_60CCFC8C + 44;
    sead__CriticalSection__lock(dword_60CCFC8C + 44);
    if ( (FIELD_U8(v4, 8) & 2) != 0 )
      sub_6091D9B0(v4);
    sead__CriticalSection__unlock(v5);
  }
  v6 = FIELD_U32(a1, 4);
  v7 = FIELD_U32(v6, 16);
  if ( v7 )
  {
    v8 = FIELD_U32(v6, 20);
    if ( a2 )
    {
      do
      {
        sub_6091D9B0(v8);
        v8 += 936;
        --v7;
      }
      while ( v7 );
    }
    else
    {
      do
      {
        if ( (FIELD_U8(v8, 8) & 2) != 0 )
        {
          v9 = dword_60CCFC8C + 44;
          sead__CriticalSection__lock(dword_60CCFC8C + 44);
          if ( (FIELD_U8(v8, 8) & 2) != 0 )
            sub_6091D9B0(v8);
          sead__CriticalSection__unlock(v9);
        }
        --v7;
        v8 += 936;
      }
      while ( v7 );
    }
  }
  return 0;
}
