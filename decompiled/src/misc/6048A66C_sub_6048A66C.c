/* sub_6048A66C
 * address: 0x6048A66C   size: 916   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048A66C(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  char v8; // r12
  int v9; // r6
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int result; // r0
  int v17; // [sp+4h] [bp-5Ch] BYREF
  int v18; // [sp+8h] [bp-58h]
  int v19; // [sp+Ch] [bp-54h]
  int (**v20)(); // [sp+10h] [bp-50h] BYREF
  char *v21; // [sp+14h] [bp-4Ch]
  int (**v22)(); // [sp+18h] [bp-48h]
  char *v23; // [sp+1Ch] [bp-44h]
  int (**v24)(); // [sp+20h] [bp-40h]
  char *v25; // [sp+24h] [bp-3Ch]
  int (**v26)(); // [sp+28h] [bp-38h]
  char *v27; // [sp+2Ch] [bp-34h]
  int (**v28)(); // [sp+30h] [bp-30h]
  char *v29; // [sp+34h] [bp-2Ch]
  int (**v30)(); // [sp+38h] [bp-28h]
  char *v31; // [sp+3Ch] [bp-24h]
  int (**v32)(); // [sp+40h] [bp-20h]
  char *v33; // [sp+44h] [bp-1Ch]

  v19 = 0;
  v20 = &sead__SafeStringBase__vtable;
  v21 = &byte_60B3BA34;
  v22 = &sead__SafeStringBase__vtable;
  v23 = &byte_60B3BA34;
  v24 = &sead__SafeStringBase__vtable;
  v25 = &byte_60B3BA34;
  v26 = &sead__SafeStringBase__vtable;
  v27 = &byte_60B3BA34;
  v28 = &sead__SafeStringBase__vtable;
  v29 = &byte_60B3BA34;
  v30 = &sead__SafeStringBase__vtable;
  v31 = &byte_60B3BA34;
  v32 = &sead__SafeStringBase__vtable;
  v33 = &byte_60B3BA34;
  v17 = (int)&sead__SafeStringBase__vtable;
  v18 = sub_604918C8(0);
  ((void (__fastcall *)(int (***)(), int *))off_60BC0240[0])(&v20, &v17);
  v19 = 1;
  v2 = sub_604918C8(1);
  v17 = (int)&sead__SafeStringBase__vtable;
  v18 = v2;
  ((void (__fastcall *)(int (***)(), int *))(&v20)[2 * v19][2])(&(&v20)[2 * v19], &v17);
  v19 = 2;
  v3 = sub_604918C8(2);
  v17 = (int)&sead__SafeStringBase__vtable;
  v18 = v3;
  ((void (__fastcall *)(int (***)(), int *))(&v20)[2 * v19][2])(&(&v20)[2 * v19], &v17);
  v19 = 3;
  v4 = sub_604918C8(3);
  v17 = (int)&sead__SafeStringBase__vtable;
  v18 = v4;
  ((void (__fastcall *)(int (***)(), int *))(&v20)[2 * v19][2])(&(&v20)[2 * v19], &v17);
  v19 = 4;
  v5 = sub_604918C8(4);
  v17 = (int)&sead__SafeStringBase__vtable;
  v18 = v5;
  ((void (__fastcall *)(int (***)(), int *))(&v20)[2 * v19][2])(&(&v20)[2 * v19], &v17);
  v19 = 5;
  v6 = sub_604918C8(5);
  v17 = (int)&sead__SafeStringBase__vtable;
  v18 = v6;
  ((void (__fastcall *)(int (***)(), int *))(&v20)[2 * v19][2])(&(&v20)[2 * v19], &v17);
  v19 = 6;
  v7 = sub_604918C8(6);
  v17 = (int)&sead__SafeStringBase__vtable;
  v18 = v7;
  ((void (__fastcall *)(int (***)(), int *))(&v20)[2 * v19][2])(&(&v20)[2 * v19], &v17);
  v17 = 7;
  sub_604756E0(a1 + 36, a1 + 3724, &v20, &v17);
  v20 = 0;
  sub_60502210(a1 + 3768, &v20, 11);
  v20 = &sead__SafeStringBase__vtable;
  v21 = "ChallengeSelect";
  sead__SafeStringBase__operator_assign(a1 + 4780, (int)&v20);
  sub_6048D158(a1);
  sub_605029FC(a1 + 3768, a1 + 5864, "SE_SYS_PAUSE");
  if ( ((unsigned int)&dword_60C9FD50[1] & ~(1615374508 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD50[1]) )
  {
    dword_60C9FE30 = 0;
    dword_60C9FE34 = 1;
    dword_60C9FE38 = 2;
    dword_60C9FE3C = 3;
    dword_60C9FE40 = 5;
    dword_60C9FE44 = 6;
    _cxa_guard_release(&dword_60C9FD50[1]);
  }
  v9 = a1 + 5848;
  v10 = dword_60C9FE30;
  if ( (unsigned int)dword_60C9FE30 >= 7 )
    v10 = 0;
  *(_DWORD *)(sub_608DE61C(a1 + 3820, *(_DWORD *)(v9 + 4 * v10)) - FIELD_U32(a1, 3832) + 192) = 0;
  v11 = dword_60C9FE34;
  if ( (unsigned int)dword_60C9FE34 >= 7 )
    v11 = 0;
  *(_DWORD *)(sub_608DE61C(a1 + 3820, *(_DWORD *)(v9 + 4 * v11)) - FIELD_U32(a1, 3832) + 192) = 0;
  v12 = dword_60C9FE38;
  if ( (unsigned int)dword_60C9FE38 >= 7 )
    v12 = 0;
  *(_DWORD *)(sub_608DE61C(a1 + 3820, *(_DWORD *)(v9 + 4 * v12)) - FIELD_U32(a1, 3832) + 192) = 0;
  v13 = dword_60C9FE3C;
  if ( (unsigned int)dword_60C9FE3C >= 7 )
    v13 = 0;
  *(_DWORD *)(sub_608DE61C(a1 + 3820, *(_DWORD *)(v9 + 4 * v13)) - FIELD_U32(a1, 3832) + 192) = 0;
  v14 = dword_60C9FE40;
  if ( (unsigned int)dword_60C9FE40 >= 7 )
    v14 = 0;
  *(_DWORD *)(sub_608DE61C(a1 + 3820, *(_DWORD *)(v9 + 4 * v14)) - FIELD_U32(a1, 3832) + 192) = 0;
  v15 = dword_60C9FE44;
  if ( (unsigned int)dword_60C9FE44 >= 7 )
    v15 = 0;
  result = sub_608DE61C(a1 + 3820, *(_DWORD *)(v9 + 4 * v15)) - FIELD_U32(a1, 3832);
  FIELD_U32(result, 192) = 0;
  return result;
}
