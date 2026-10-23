/* sub_6092AFC8
 * address: 0x6092AFC8   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *sub_6092AFC8()
{
  char *v0; // r0
  char *v1; // r0
  char *v2; // r0
  char *v3; // r0
  char *result; // r0
  int (**v5)(); // [sp+8h] [bp-18h] BYREF
  void *v6; // [sp+Ch] [bp-14h]
  int (**v7)(); // [sp+10h] [bp-10h] BYREF
  const char *v8; // [sp+14h] [bp-Ch]

  v7 = &sead__SafeStringBase__vtable;
  v5 = &sead__SafeStringBase__vtable;
  v8 = "AmbientLight";
  v6 = &unk_60AEB150;
  v0 = sub_60923388(&v7, &v5, (int)sub_6092ADD0, 0, 216);
  v7 = &sead__SafeStringBase__vtable;
  v5 = &sead__SafeStringBase__vtable;
  dword_60CD09C0 = (int)v0;
  v8 = "HemisphereLight";
  v6 = &unk_60AEB17C;
  v1 = sub_60923388(&v7, &v5, (int)sub_6092AF58, 0, 276);
  v7 = &sead__SafeStringBase__vtable;
  v5 = &sead__SafeStringBase__vtable;
  dword_60CD09C4 = (int)v1;
  v8 = "DirectionalLight";
  v6 = &unk_60AEB19D;
  v2 = sub_60923388(&v7, &v5, (int)sub_6092AF74, 0, 396);
  v7 = &sead__SafeStringBase__vtable;
  v5 = &sead__SafeStringBase__vtable;
  dword_60CD09C8 = (int)v2;
  v8 = "PointLight";
  v6 = &unk_60AEB1CA;
  v3 = sub_60923388(&v7, &v5, (int)sub_6092AF90, 0, 308);
  v7 = &sead__SafeStringBase__vtable;
  v5 = &sead__SafeStringBase__vtable;
  dword_60CD09CC = (int)v3;
  v8 = "SpotLight";
  v6 = &unk_60AEB1EA;
  result = sub_60923388(&v7, &v5, (int)sub_6092AFAC, 0, 372);
  dword_60CD09D0 = (int)result;
  return result;
}
