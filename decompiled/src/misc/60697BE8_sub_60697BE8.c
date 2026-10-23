/* sub_60697BE8
 * address: 0x60697BE8   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60697BE8(int a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r3
  unsigned int v5; // r1
  __int64 v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r2
  int v11; // r6
  unsigned int v12; // r3
  int v13; // r7
  int v14; // r5
  int v15; // r8
  int v16; // r0
  int v17; // r6
  int (__fastcall ***v18)(_DWORD, int *); // r6

  if ( !FIELD_U8(dword_60CC6D78, 109032) && !FIELD_U8(dword_60C9A1F0, 6516) )
  {
    v3 = FIELD_U8(a1, 539);
    if ( FIELD_U8(a1, 539) )
    {
      v4 = v3 - 33;
      v5 = 1u >> (33 - v3);
      if ( v3 - 33 >= 0 )
        v5 = 1 << v4;
      v6 = *(_QWORD *)(EventMgr__instance + 16);
      v7 = HIDWORD(v6) & v5;
      v8 = 1 << (v3 - 1);
      if ( v4 >= 0 )
        v8 = 0;
      v9 = ((unsigned int)v6 & v8 | v7) != 0;
    }
    else
    {
      v9 = 0;
    }
    v10 = FIELD_U8(a1, 540);
    if ( FIELD_U8(a1, 540) )
    {
      v11 = v10 - 33;
      v12 = 1u >> (33 - v10);
      if ( v10 - 33 >= 0 )
        v12 = 1 << v11;
      v13 = 1 << (v10 - 1);
      if ( v11 >= 0 )
        v13 = 0;
      v9 |= (*(_DWORD *)(EventMgr__instance + 16) & v13 | *(_DWORD *)(EventMgr__instance + 20) & v12) != 0;
    }
    if ( FIELD_U8(a1, 539) )
    {
      if ( v9 != 1 )
        return;
    }
    else if ( !(v9 | (v10 == 0)) )
    {
      return;
    }
    v14 = 0;
    v15 = a1 + 6104;
    do
    {
      if ( *(_BYTE *)(v15 + v14) == 1 )
      {
        v16 = (FIELD_U32(a1, 20) >> 26) & 3;
        if ( !v16 )
        {
          v18 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v14 + 48);
          if ( ((unsigned int)&dword_60C7B37C & ~(1617526376 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( !v18 || (**v18)(v18, &dword_60C7B378) != 1 || sub_60767234(v18) )
            goto LABEL_39;
          goto LABEL_38;
        }
        if ( v16 == 1 )
        {
          (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB93F0);
          return;
        }
        v17 = *(_DWORD *)(PlayerMgr_instance + 4 * v14 + 48);
        if ( ((unsigned int)&dword_60C7B37C & ~(1617526264 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v17 && (**(int (__fastcall ***)(int, int *))v17)(v17, &dword_60C7B378) == 1 )
        {
          if ( (FIELD_U8(v17, 1219) & 8) == 0 )
          {
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB9410);
            return;
          }
LABEL_38:
          *(_BYTE *)(v15 + v14) = 0;
        }
      }
LABEL_39:
      ++v14;
    }
    while ( v14 < 4 );
  }
}
