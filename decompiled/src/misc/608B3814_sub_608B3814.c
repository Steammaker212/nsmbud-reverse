/* sub_608B3814
 * address: 0x608B3814   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B3814(int *a1, unsigned int a2, int a3, int a4)
{
  int v7; // r6
  int v8; // r5
  int v9; // r7
  int v10; // r0
  bool v11; // zf
  int v12; // r9
  int v13; // r6
  int v14; // r0
  int v16; // [sp+8h] [bp-50h] BYREF
  int v17; // [sp+Ch] [bp-4Ch]
  char v18; // [sp+10h] [bp-48h]

  v7 = a2;
  v8 = sub_608A9A94(a1[1], a2);
  v9 = (*(int (__fastcall **)(int *, int))(*a1 + 16))(a1, v8);
  if ( !v9 )
  {
    v9 = 0;
    v16 = -1;
    v18 = 0;
    v10 = sub_608A9F2C(a1[1], v7, (int)&v16);
    v11 = v10 == 0;
    if ( v10 )
    {
      v7 = v17;
      v11 = v17 == 0;
    }
    if ( !v11 )
    {
      v9 = 0;
      if ( sub_608B3984(a1, v8, &v16, 44, 0, a4) == 44 )
      {
        v12 = sub_608B4850(&v16);
        if ( sub_608B47F8(&v16) <= v12 )
        {
          v13 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a3 + 8))(a3, 4 * v7 + v12 + 4);
          if ( v13 )
          {
            v9 = 0;
            if ( sub_608B3984(a1, v8, v13, v12, 0, a4) == v12 )
            {
              qmemcpy((void *)(v13 + v12), "FWAT", 4);
              v14 = sub_608B4894(&v16, v13, 1);
              sub_608B4A50(v14);
              (*(void (__fastcall **)(int *, int, int))(*a1 + 8))(a1, v8, v13);
              return v13;
            }
          }
        }
      }
    }
  }
  return v9;
}
