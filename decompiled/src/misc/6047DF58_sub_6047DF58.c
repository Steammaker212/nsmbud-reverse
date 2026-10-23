/* sub_6047DF58
 * address: 0x6047DF58   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047DF58(int a1, _DWORD *a2, int a3, int a4, _DWORD *a5, int a6, int *a7)
{
  int v10; // r6
  unsigned int v11; // r4
  unsigned __int16 *v12; // r7
  int v13; // r5
  int v14; // r5
  _BYTE v16[8]; // [sp+20h] [bp-238h] BYREF
  int (**v17)(); // [sp+28h] [bp-230h] BYREF
  int *v18; // [sp+2Ch] [bp-22Ch]
  int v19; // [sp+30h] [bp-228h]
  int v20; // [sp+34h] [bp-224h] BYREF

  v10 = StaffCreditTable_init(a1);
  if ( !v10 )
    return 0;
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v11 = sub_60911638(FIELD_U32(v10, 4), a2[1]);
  v12 = 0;
  if ( FIELD_U32(v10, 8) > v11 )
    v12 = (unsigned __int16 *)sub_6091171C(FIELD_U32(v10, 4), v11);
  v13 = sub_609119F8(v10, v11);
  v18 = &v20;
  v17 = &off_60BFCA1C;
  v19 = 256;
  sub_608FDDB4(&v17);
  *(_WORD *)v18 = 0;
  v17 = &off_60BFCA04;
  sub_608FDDB4(&v17);
  v14 = sub_6047ACD8((int)v18, v19, v12, v13, v10, a4, a5, 0, a6, a7);
  ((void (__fastcall *)(int (***)()))v17[3])(&v17);
  sub_60987718(v16, v14, v18);
  return sub_60985434(a3, v16, 0);
}
