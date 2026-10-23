/* sub_608DBAA4
 * address: 0x608DBAA4   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DBAA4(_DWORD *a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  char v6; // r12
  int (__fastcall ***v11)(_DWORD, int *); // r7
  int v12; // r6
  int v13; // r7
  int *v14; // r6
  unsigned int v15; // r0
  int result; // r0
  int v17[8]; // [sp+0h] [bp-58h] BYREF
  char v18; // [sp+20h] [bp-38h]
  int v19; // [sp+24h] [bp-34h]
  int v20; // [sp+28h] [bp-30h]
  int v21; // [sp+2Ch] [bp-2Ch]
  int v22; // [sp+30h] [bp-28h]

  v11 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619901148 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v12 = (int)(v11 + 48);
  if ( !(**v11)(v11, &dword_60CC6AE4) )
    v12 = 192;
  if ( !*(_BYTE *)v12 )
    return 0;
  v13 = sub_608AA9FC(a2, a5);
  a1[107] = operator_new_8DE2C8(v13, a6, 4096);
  if ( a3 )
  {
    a1[109] = operator_new_8DE2C8(a3, a6, 4096);
    v14 = a1 + 109;
    if ( a4 )
    {
      v15 = sub_608AAA0C();
      a1[113] = v15;
      a1[112] = operator_new_8DE2C8(v15, a6, 64);
    }
  }
  else
  {
    a1[109] = 0;
    v14 = a1 + 109;
  }
  v18 = 1;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v17[0] = a2;
  v17[1] = a1[114];
  v17[2] = a1[107];
  v17[3] = v13;
  v17[4] = *v14;
  v17[5] = a3;
  v17[6] = a1[112];
  v17[7] = a1[113];
  v21 = a5;
  result = sub_608AA604((int)(a1 + 2), v17);
  a1[108] = v13;
  a1[110] = a3;
  return result;
}
