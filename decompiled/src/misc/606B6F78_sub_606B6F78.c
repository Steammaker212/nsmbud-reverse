/* sub_606B6F78
 * address: 0x606B6F78   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606B6F78(_DWORD *a1, int a2)
{
  _BYTE *v2; // r6
  char v3; // r12
  char v6; // r12
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r0
  int v12; // r0
  bool v13; // zf
  int v14; // r1
  bool v15; // zf
  int v16; // r0
  int v17; // r1
  bool v18; // zf

  if ( ((unsigned int)&dword_60C7B37C & ~(1617653652 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( a2 && (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B378) == 1 )
  {
    v7 = 0x80000000;
    if ( FIELD_U8(a2, 533) == 1 )
      v7 = 1 << FIELD_U8(a2, 84);
    if ( (a1[1544] & v7) == 0 )
    {
      if ( FIELD_U32(a2, 1320) != 3 )
        goto LABEL_34;
      if ( ((unsigned int)&dword_60C7B374 & ~(1617653964 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B370) != 1 )
        goto LABEL_26;
      v12 = sub_6079D894(a2);
      v13 = v12 == 0;
      if ( v12 )
        v13 = FIELD_U32(v12, 1320) == 3;
      if ( v13 )
      {
LABEL_26:
        if ( a1[1537] != 1 )
        {
          (*(void (__fastcall **)(_DWORD *))(*a1 + 220))(a1);
          a1[25] = 1031798784;
          sub_606B67E8(a1, 2);
        }
        SE_EMY_PATAMET_ref((int)a1, a2, FIELD_S8(a2, 84));
        if ( FIELD_U8(a2, 84) != 255 )
        {
          v14 = FIELD_U8(dword_60C9A1F0, 6559);
          v15 = v14 == 1;
          if ( v14 == 1 )
          {
            v2 = a1 + 1545;
            v15 = *((_BYTE *)a1 + 6180) == 0;
          }
          if ( v15 )
          {
            sub_6040B2DC((unsigned __int8 *)dword_60C9A1F0);
            *v2 = 1;
          }
        }
      }
      else
      {
LABEL_34:
        v16 = *a1;
        if ( (FIELD_U8(a2, 1210) & 0x11) != 0 )
          (*(void (__fastcall **)(_DWORD *))(v16 + 212))(a1);
        else
          (*(void (__fastcall **)(_DWORD *))(v16 + 216))(a1);
        a1[25] = 1031798784;
        SE_EMY_PATAMET_ref((int)a1, a2, FIELD_S8(a2, 84));
        if ( FIELD_U8(a2, 84) != 255 )
        {
          v17 = FIELD_U8(dword_60C9A1F0, 6559);
          v18 = v17 == 1;
          if ( v17 == 1 )
          {
            v2 = a1 + 1545;
            v18 = *((_BYTE *)a1 + 6180) == 0;
          }
          if ( v18 )
          {
            sub_6040B2DC((unsigned __int8 *)dword_60C9A1F0);
            *v2 = 1;
          }
        }
        if ( !a1[1542] )
          sub_606B67E8(a1, 1);
      }
    }
    if ( a1[1542] == 1 )
    {
      v8 = (_DWORD *)a1[1526];
      v9 = v8[3];
      v10 = v8[2];
      v11 = v8[17];
      if ( v10 > v11 )
        v9 += 4 * v11;
      if ( (*(_BYTE *)(*(_DWORD *)v9 + 28) & 0x20) != 0 && (*(int (__fastcall **)(_DWORD *))(*a1 + 228))(a1) == 1 )
        sub_606B67E8(a1, 2);
    }
    FIELD_U32(a2, 1220) |= 0x200000u;
    FIELD_U32(a2, 1236) |= 0x40u;
    a1[1541] = 60;
  }
}
