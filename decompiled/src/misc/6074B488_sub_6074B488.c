/* sub_6074B488
 * address: 0x6074B488   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074B488(int a1, int r1_0)
{
  const char *v4; // r5
  bool v5; // zf
  char *cstr; // r6
  signed int v7; // r7
  bool v8; // cc
  void *Resource; // r0
  int result; // r0
  sead__SafeString a2; // [sp+14h] [bp-4Ch] BYREF
  int v12; // [sp+1Ch] [bp-44h]
  int v13; // [sp+20h] [bp-40h] BYREF
  _DWORD v14[8]; // [sp+40h] [bp-20h] BYREF

  v14[0] = &sead__SafeStringBase__vtable;
  v4 = "copyright";
  v14[1] = "copyright";
  a2.cstr = (char *)&v13;
  a2.vtable = &BufferedSafeStringBase_char_vtable_probably;
  v12 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&a2);
  v5 = r1_0 == 0;
  *a2.cstr = 0;
  a2.vtable = &off_60BD4C20;
  cstr = a2.cstr;
  if ( !v5 )
    v4 = "copyright_France";
  if ( a2.cstr != v4 )
  {
    v7 = 0;
    while ( v4[v7] )
    {
      if ( !v4[v7 + 1] )
      {
        ++v7;
        break;
      }
      if ( !v4[v7 + 2] )
      {
        v7 += 2;
        break;
      }
      v8 = v7 + 2 < 0x80000;
      v7 += 3;
      if ( !v8 )
      {
        v7 = 0;
        break;
      }
    }
    if ( v7 >= v12 )
      v7 = v12 - 1;
    qmemcpy(a2.cstr, v4, v7);
    cstr[v7] = 0;
  }
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v14);
  result = Resource_getModel2(Resource, &a2, 0, 0, 0, 0, 0, 0, 0);
  FIELD_U32(a1, 1196) = result;
  return result;
}
