/* sub_608F62C0
 * address: 0x608F62C0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F62C0(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r0
  bool v8; // zf
  int v9; // r8
  int v10; // r0
  int v11; // r6
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r1

  v6 = 0;
  if ( a2 )
  {
    v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 68))(a1, a2);
    v8 = v7 == 1;
    if ( v7 == 1 )
    {
      LOWORD(v7) = FIELD_U16(a1, 120);
      v8 = (v7 & 2) == 0;
    }
    if ( v8 )
    {
      v9 = 0;
      if ( (v7 & 1) != 0 )
      {
        sead__CriticalSection__lock(a1 + 84);
        v9 = a1 + 84;
      }
      v10 = *(_DWORD *)(a2 - 4);
      v11 = v10 - 1;
      if ( (v10 & 1) == 0 )
        v11 = a2 - 16;
      if ( v11 )
      {
        v6 = 0;
        if ( FIELD_U16(v11, 8) == FIELD_U16(a1, 122) )
        {
          sead__ListNode__erase((_DWORD *)(FIELD_U32(a1, 156) + v11));
          --FIELD_U32(a1, 152);
          FIELD_U32(v11, 12) += FIELD_U16(v11, 10);
          FIELD_U16(v11, 10) = 0;
          v12 = sub_608F7394(a1, v11);
          v6 = FIELD_U32(v12, 12);
          v13 = abs32(a3);
          if ( v13 >= 5 )
          {
            v14 = v12 + FIELD_U16(v12, 10) + 16;
            v6 = v14 + v6 - ((v13 + v14 - 1) & -v13);
            if ( !v9 )
              return v6;
            goto LABEL_28;
          }
        }
      }
      else
      {
        v15 = 0;
        if ( (FIELD_U8(a1, 120) & 1) != 0 )
        {
          sead__CriticalSection__lock(a1 + 84);
          v15 = a1 + 84;
        }
        v16 = FIELD_U32(a1, 148);
        if ( v16 != a1 + 144 )
        {
          do
            v16 = FIELD_U32(v16, 4);
          while ( v16 - FIELD_U32(a1, 156) != a1 + 144 - FIELD_U32(a1, 156) );
        }
        if ( v15 )
          sead__CriticalSection__unlock(v15);
        v17 = 0;
        if ( (FIELD_U8(a1, 120) & 1) != 0 )
        {
          sead__CriticalSection__lock(a1 + 84);
          v17 = a1 + 84;
        }
        v18 = FIELD_U32(a1, 132);
        if ( v18 != a1 + 128 )
        {
          do
            v18 = FIELD_U32(v18, 4);
          while ( v18 - FIELD_U32(a1, 140) != a1 + 128 - FIELD_U32(a1, 140) );
        }
        v6 = 0;
        if ( v17 )
          sead__CriticalSection__unlock(v17);
      }
      if ( !v9 )
        return v6;
LABEL_28:
      sead__CriticalSection__unlock(v9);
    }
  }
  return v6;
}
