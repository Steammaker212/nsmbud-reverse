/* sub_608E8914
 * address: 0x608E8914   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E8914(int a1, int a2)
{
  _BYTE *v4; // r10
  int v5; // r3
  int v6; // r6
  int v7; // r7
  int v8; // r3
  int v9; // r5
  int v10; // r6
  int v11; // r7
  int result; // r0
  _DWORD v13[2]; // [sp+8h] [bp-168h] BYREF
  _DWORD v14[9]; // [sp+10h] [bp-160h] BYREF
  int v15; // [sp+34h] [bp-13Ch]
  int v16; // [sp+38h] [bp-138h]
  char v17; // [sp+3Ch] [bp-134h]
  int (**v18)(); // [sp+44h] [bp-12Ch] BYREF
  int *v19; // [sp+48h] [bp-128h]
  int v20; // [sp+4Ch] [bp-124h]
  int v21; // [sp+50h] [bp-120h] BYREF

  v19 = &v21;
  v18 = &BufferedSafeStringBase_char_vtable_probably;
  v20 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v18);
  *(_BYTE *)v19 = 0;
  v18 = &off_60BD94BC;
  v4 = (_BYTE *)sub_608E8770(a1, a2, (int)&v18);
  if ( !v4 )
    return 0;
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = FIELD_U32(a2, 4);
  v5 = FIELD_U32(a2, 12);
  v6 = FIELD_U32(a2, 16);
  v7 = FIELD_U32(a2, 20);
  v14[2] = FIELD_U32(a2, 8);
  v14[3] = v5;
  v14[4] = v6;
  v14[5] = v7;
  v8 = FIELD_U32(a2, 28);
  v9 = FIELD_U32(a2, 32);
  v10 = FIELD_U32(a2, 36);
  v11 = FIELD_U32(a2, 40);
  v14[6] = FIELD_U32(a2, 24);
  v14[7] = v8;
  v14[8] = v9;
  v15 = v10;
  v16 = v11;
  v17 = FIELD_U8(a2, 44);
  ((void (__fastcall *)(int (***)()))v18[3])(&v18);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = v19;
  sead__SafeStringBase__operator_assign((int)v14, (int)v13);
  result = sub_608E6154(v4);
  FIELD_U32(a2, 36) = v15;
  FIELD_U32(a2, 40) = v16;
  FIELD_U8(a2, 44) = v17;
  return result;
}
