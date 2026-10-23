/* sub_60639BC0
 * address: 0x60639BC0   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60639BC0(int a1, float a2, float a3)
{
  int ResArchiveById; // r9
  float v7; // s20
  int v9; // [sp+0h] [bp-70h] BYREF
  int v10; // [sp+4h] [bp-6Ch]
  int v11; // [sp+8h] [bp-68h]
  float v12; // [sp+Ch] [bp-64h]
  int v13; // [sp+10h] [bp-60h]
  int v14; // [sp+14h] [bp-5Ch]
  int v15; // [sp+18h] [bp-58h]
  int v16; // [sp+1Ch] [bp-54h]
  int v17; // [sp+20h] [bp-50h]
  int v18; // [sp+24h] [bp-4Ch]
  int v19; // [sp+28h] [bp-48h]
  int v20; // [sp+2Ch] [bp-44h]

  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v9 = 1065353216;
  v10 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 1065353216;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 1065353216;
  v7 = (float)(a2 + a2) + 32.0;
  v12 = v7 * 0.5;
  v16 = -1056964608;
  v20 = 0;
  ((void (__fastcall *)(int, int, int *, int *, float, float))sub_606B4E90)(
    a1 + 6100,
    ResArchiveById,
    dword_60CB53D8,
    &v9,
    a2,
    a3);
  v9 = 1065353216;
  v10 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 1065353216;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 1065353216;
  v12 = v7 + (float)(v7 * 0.5);
  v16 = -1056964608;
  v20 = 0;
  ((void (__fastcall *)(int, int, int *, int *, float, float))sub_606B4E90)(
    a1 + 6216,
    ResArchiveById,
    &dword_60CB53FC,
    &v9,
    a2,
    a3);
  v9 = 1065353216;
  v10 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 1065353216;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 1065353216;
  v12 = v7 + (float)(v7 + (float)(v7 * 0.5));
  v16 = -1056964608;
  v20 = 0;
  ((void (__fastcall *)(int, int, int *, int *, float, float))sub_606B4E90)(
    a1 + 6332,
    ResArchiveById,
    &dword_60CB5420,
    &v9,
    a2,
    a3);
  v9 = 1065353216;
  v10 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 1065353216;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 1065353216;
  v12 = v7 + (float)(v7 + (float)(v7 + (float)(v7 * 0.5)));
  v16 = -1056964608;
  v20 = 0;
  return ((int (__fastcall *)(int, int, int *, int *, float, float))sub_606B4E90)(
           a1 + 6448,
           ResArchiveById,
           &dword_60CB5444,
           &v9,
           a2,
           a3);
}
