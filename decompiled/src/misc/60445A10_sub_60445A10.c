/* sub_60445A10
 * address: 0x60445A10   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60445A10(_DWORD *a1, void *a2)
{
  signed int v4; // r0
  int v5; // r9
  const char *v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r9
  const char *v10; // r0
  char *v11; // r0
  unsigned int v12; // r0
  int v13; // r1
  int v14; // r0
  int result; // r0
  int v16; // [sp+Ch] [bp-43Ch]
  sead__SafeString identifier; // [sp+10h] [bp-438h] BYREF
  sead__SafeString v18; // [sp+41Ch] [bp-2Ch] BYREF

  v18.vtable = &sead__SafeStringBase__vtable;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "RedProS_Proc";
  v18.cstr = "Shader/RedProS_Proc.Nin_NX_NVN.release.szs";
  v4 = ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &v18, a2, 1);
  v5 = ArchiveManagerMaybe_instance;
  v18.vtable = &sead__SafeStringBase__vtable;
  v18.cstr = "RedProS_Proc";
  v6 = (const char *)sub_6091AE90(v4);
  sub_604209A4(&identifier, "%s.%s", "RedProS_Proc", v6);
  v7 = 0;
  v8 = sub_608226EC(v5, &v18, &identifier, 0);
  v9 = ArchiveManagerMaybe_instance;
  v18.vtable = &sead__SafeStringBase__vtable;
  v16 = v8;
  v18.cstr = "RedProS_Proc";
  v10 = (const char *)sharcb_ref(v8);
  sub_604209A4(&identifier, "%s.%s", "RedProS_Proc", v10);
  if ( v16 | sub_608226EC(v9, &v18, &identifier, 0) )
    sub_6091E838(a1 + 31);
  do
  {
    v11 = off_60BFAEF8[v7];
    identifier.vtable = &sead__SafeStringBase__vtable;
    identifier.cstr = v11;
    v12 = sub_6091F9A0(a1 + 31, &identifier);
    v13 = 0;
    if ( a1[38] > v12 )
      v13 = a1[39] + 936 * v12;
    v14 = a1[4];
    if ( v14 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v14) = v13;
      ++a1[4];
    }
    ++v7;
  }
  while ( v7 != 24 );
  sub_6071C14C((int)a2);
  sub_60414BB8((int)a2);
  sub_60728038((int)a2);
  sub_60450860((int)a2);
  sub_6042CDF8((int)a2);
  sub_6042C5A0((int)a2);
  sub_60440F90((int)a2);
  if ( a1[36] )
    return sub_6091F558(a1 + 31);
  result = a1[37];
  if ( result )
    return sub_6091F558(a1 + 31);
  return result;
}
