/* sub_605B3934
 * address: 0x605B3934   size: 1128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B3934(int a1, int a2)
{
  int v4; // r6
  int v5; // r5
  char v6; // r12
  int v7; // r7
  char v8; // r12
  bool v9; // zf
  int v10; // r10
  unsigned int v11; // r9
  char v12; // r12
  int (__fastcall ***v13)(_DWORD, int *); // r5
  int (__fastcall ***v14)(_DWORD, int *); // r10
  char v15; // r12
  int v16; // r5
  int v17; // r0
  int v18; // r0
  _BYTE *v19; // r0
  int v20; // r1
  int v21; // r0
  unsigned int v22; // r0
  int v23; // r2

  v4 = FIELD_U32(a1, 144);
  v5 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 2);
  if ( ((unsigned int)&dword_60C7B384 & ~(1616591216 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
  {
    dword_60C7B380 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7B384);
  }
  if ( !v4 )
    return sub_605B3E18(a1, a2);
  v7 = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B380);
  if ( v7 )
    v7 = v4;
  v9 = v5 == 0;
  if ( v5 )
    v9 = v7 == 0;
  if ( v9 )
    return sub_605B3E18(a1, a2);
  if ( (unsigned __int8)(FIELD_U8(v5, 533) - 1) > 1u )
  {
    v20 = FIELD_U32(a2, 2544);
    if ( (v20 & 0x120) != 0 )
    {
      FIELD_U8(v7, 6843) = 8;
      v21 = 1;
      if ( (FIELD_U32(a2, 2544) & 0x40) == 0 )
        goto LABEL_47;
    }
    else
    {
      v21 = 0;
      if ( (v20 & 0x40) == 0 )
        goto LABEL_47;
    }
    if ( FIELD_U8(v4, 6876) )
    {
      FIELD_U32(v4, 6824) = 2;
      FIELD_U8(v4, 6843) = 1;
      goto LABEL_48;
    }
LABEL_47:
    if ( v21 != 1 )
    {
LABEL_53:
      if ( (FIELD_U8(a2, 2550) & 1) != 0 )
      {
        if ( ((unsigned int)&dword_60C7B384 & ~(1616592168 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
        {
          dword_60C7B380 = (int)&off_60BC00C8;
          _cxa_guard_release(&dword_60C7B384);
        }
        if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B380) == 1 )
          FIELD_U32(v4, 6824) = 2;
      }
      return sub_605B3E18(a1, a2);
    }
LABEL_48:
    v22 = FIELD_U8(v5, 84);
    if ( v22 == 255 )
      v22 = 0;
    v23 = (char)v22;
    if ( v22 >= 4 )
      v23 = 0;
    *(_BYTE *)(v4 + 12 * v23 + 6917) = v22;
    FIELD_U8(v4, 6845) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 68))(v4);
    goto LABEL_53;
  }
  v10 = FIELD_S8(v5, 84);
  v11 = (unsigned __int8)v10;
  if ( (unsigned __int8)v10 == 255 )
  {
    v19 = (_BYTE *)(v7 + 6843);
    goto LABEL_43;
  }
  if ( ((unsigned int)&dword_60C7B37C & ~(1616591384 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 )
  {
    if ( (unsigned __int8)v10 >= 4u )
      v10 = 0;
    v13 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v10 + 48);
    if ( ((unsigned int)&dword_60C7B374 & ~(1616591520 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v13 )
    {
      if ( (**v13)(v13, &dword_60C7B370) == 1 )
      {
        v14 = (int (__fastcall ***)(_DWORD, int *))sub_6079D894(v13);
        if ( v14 )
        {
          if ( ((unsigned int)&dword_60C7B364 & ~(1616591656 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
          {
            StageActor_RTTI = (int)&off_60BC0098;
            _cxa_guard_release(&dword_60C7B364);
          }
          v16 = (int)(v14 + 21);
          if ( !(**v14)(v14, &StageActor_RTTI) )
            v16 = 84;
          v11 = *(unsigned __int8 *)v16;
        }
      }
    }
  }
  v17 = (char)v11;
  if ( v11 >= 4 )
    v17 = 0;
  *(_BYTE *)(v7 + 12 * v17 + 6917) = v11;
  FIELD_U8(v7, 6845) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 68))(v4);
  FIELD_U8(v4, 552) = 1;
  v18 = FIELD_U32(a2, 2544);
  if ( (v18 & 0x120) != 0 )
  {
    FIELD_U8(v7, 6843) = 8;
    v18 = FIELD_U32(a2, 2544);
  }
  if ( (v18 & 0x40) != 0 && FIELD_U8(v4, 6876) )
  {
    FIELD_U32(v4, 6824) = 2;
    FIELD_U8(v4, 6843) = 1;
  }
  if ( (FIELD_U8(a2, 2549) & 0x80) != 0 )
  {
    FIELD_U32(v4, 6824) = 2;
    FIELD_U8(v4, 6843) = 1;
    v19 = (_BYTE *)(v4 + 6841);
LABEL_43:
    *v19 = 1;
  }
  return sub_605B3E18(a1, a2);
}
