/* sub_6042B0CC
 * address: 0x6042B0CC   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042B0CC(_DWORD *a1, void *a2)
{
  int v4; // r7
  int v5; // r0
  _DWORD *v6; // r0
  sead__SafeString identifier; // [sp+8h] [bp-80h] BYREF
  _DWORD v9[4]; // [sp+18h] [bp-70h] BYREF
  int v10; // [sp+28h] [bp-60h]
  int v11; // [sp+2Ch] [bp-5Ch]
  int v12; // [sp+30h] [bp-58h]
  int v13; // [sp+34h] [bp-54h]
  int v14; // [sp+38h] [bp-50h]
  int v15; // [sp+3Ch] [bp-4Ch]
  int v16; // [sp+40h] [bp-48h]
  int v17; // [sp+44h] [bp-44h]
  int v18; // [sp+4Ch] [bp-3Ch]
  int v19; // [sp+50h] [bp-38h]
  int v20; // [sp+54h] [bp-34h]
  int v21; // [sp+58h] [bp-30h]
  int v22; // [sp+5Ch] [bp-2Ch]
  sead__SafeString path; // [sp+60h] [bp-28h] BYREF

  v4 = ArchiveManagerMaybe_instance;
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "Mii";
  path.cstr = "Model/Mii.Nin_NX_NVN.szs";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, a2, 1);
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "Mii";
  path.cstr = "TextureShader.bnsh";
  a1[366] = sub_608226EC(v4, &identifier, &path, 0);
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "Mii";
  path.cstr = "MiiIcon.sharcb";
  a1[367] = sub_608226EC(v4, &identifier, &path, 0);
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "Mii";
  path.cstr = "IconBody.dat";
  a1[368] = sub_608226EC(v4, &identifier, &path, a1 + 369);
  a1[370] = 0;
  identifier.vtable = &sead__SafeStringBase__vtable;
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "Mii";
  path.cstr = "output.bfres";
  a1[371] = sub_608226EC(v4, &identifier, &path, a1 + 372);
  a1[376] = 4096;
  a1[373] = 4096;
  a1[374] = 0;
  nullsub_80(&identifier);
  sub_6083E8FC(v9);
  v10 = 0;
  v11 = 0;
  v22 = 0;
  sub_6083E644(&identifier);
  sub_6083E65C(&identifier, 1);
  sub_6083E664(&identifier, 1);
  sub_6083E66C(&identifier, 0);
  sub_6083E674(&identifier, 1);
  sub_6083E914(v9, 2817);
  sub_6083E91C(v9, 2817);
  sub_6083E924(v9, 1);
  v9[3] = a1[366];
  v12 = a1[368];
  v10 = a1[367];
  v13 = a1[369];
  v14 = a1[370];
  v15 = a1[371];
  v16 = a1[372];
  v17 = a1[373];
  v18 = a1[374];
  v19 = a1[375];
  v5 = a1[376];
  path.vtable = (void *)1;
  v20 = v5;
  v21 = dword_60C9C100;
  v22 = 2;
  v6 = (_DWORD *)sub_60418974((int)a2);
  sub_60418FB4(v6, &identifier, a2);
  return nullsub_81(v9);
}
