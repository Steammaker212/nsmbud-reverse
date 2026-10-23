/* sub_606B8A08
 * address: 0x606B8A08   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606B8A08(_DWORD *a1, int a2)
{
  char v2; // r12
  int v5; // r0
  unsigned int v6; // r0
  int v7; // r1
  int v8; // r6
  unsigned int v9; // r0
  unsigned int v10; // r0
  int v11; // r1
  int v12; // r0
  unsigned int v13; // r0
  int v14; // r1
  _DWORD *v15; // r0
  int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r0

  if ( ((unsigned int)&dword_60C7B37C & ~(1617660452 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( a2 && (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B378) == 1 )
  {
    v5 = 0x80000000;
    if ( FIELD_U8(a2, 533) == 1 )
      v5 = 1 << FIELD_U8(a2, 84);
    if ( (a1[1544] & v5) == 0 )
    {
      if ( sub_606B6EAC((int)a1, a2) )
      {
        if ( a1[1537] != 1 )
        {
          v6 = FIELD_U8(a2, 84);
          v7 = 0;
          v8 = 0;
          if ( v6 < 4 )
            v7 = (char)v6;
          if ( !a1[v7 + 1808] )
          {
            (*(void (__fastcall **)(_DWORD *))(*a1 + 220))(a1);
            v9 = FIELD_U8(a2, 84);
            if ( v9 < 4 )
              v8 = (char)v9;
            a1[v8 + 1808] = 45;
          }
          a1[25] = 1031798784;
          sub_606B67E8(a1, 2);
        }
        SE_EMY_PATAMET_ref((int)a1, a2, FIELD_S8(a2, 84));
        sub_606B6C50((int)a1, a2, FIELD_S8(a2, 84));
      }
      else
      {
        v10 = FIELD_U8(a2, 84);
        v11 = 0;
        if ( v10 < 4 )
          v11 = (char)v10;
        if ( !a1[v11 + 1808] )
        {
          v12 = *a1;
          if ( (FIELD_U8(a2, 1210) & 0x11) != 0 )
            (*(void (__fastcall **)(_DWORD *))(v12 + 212))(a1);
          else
            (*(void (__fastcall **)(_DWORD *))(v12 + 216))(a1);
          v13 = FIELD_U8(a2, 84);
          v14 = 0;
          if ( v13 < 4 )
            v14 = (char)v13;
          a1[v14 + 1808] = 45;
        }
        a1[25] = 1031798784;
        SE_EMY_PATAMET_ref((int)a1, a2, FIELD_S8(a2, 84));
        sub_606B6C50((int)a1, a2, FIELD_S8(a2, 84));
        if ( !a1[1542] )
          sub_606B67E8(a1, 1);
      }
    }
    if ( a1[1542] == 1 )
    {
      v15 = (_DWORD *)a1[1526];
      v16 = v15[3];
      v17 = v15[2];
      v18 = v15[17];
      if ( v17 > v18 )
        v16 += 4 * v18;
      if ( (*(_BYTE *)(*(_DWORD *)v16 + 28) & 0x20) != 0 && (*(int (__fastcall **)(_DWORD *))(*a1 + 228))(a1) == 1 )
        sub_606B67E8(a1, 2);
    }
    FIELD_U32(a2, 1220) |= 0x200000u;
    FIELD_U32(a2, 1236) |= 0x40u;
    a1[1541] = 60;
  }
}
