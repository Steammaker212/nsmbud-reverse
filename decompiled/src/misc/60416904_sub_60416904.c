/* sub_60416904
 * address: 0x60416904   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60416904(int a1, int a2)
{
  int v4; // r6
  int v5; // r1
  int result; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int (**v14)(); // [sp+4h] [bp-A4h] BYREF
  int *v15; // [sp+8h] [bp-A0h]
  int v16; // [sp+Ch] [bp-9Ch]
  int v17; // [sp+10h] [bp-98h] BYREF

  v15 = &v17;
  v14 = &BufferedSafeStringBase_char_vtable_probably;
  v16 = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v14);
  *(_BYTE *)v15 = 0;
  v14 = &off_60BD95A8;
  v4 = dword_60C9BBD4;
  result = sub_60905394(a1, v5);
  if ( !result )
  {
    sub_60905500(a1, &v14, 128);
    if ( *(_BYTE *)v15 )
    {
      v7 = sub_604277CC(v4, 0);
      sub_60426E08(v4, &v14, v7, a2);
    }
    sub_60905500(a1, &v14, 128);
    if ( *(_BYTE *)v15 )
    {
      v8 = sub_604277CC(v4, 1);
      sub_60426E08(v4, &v14, v8, a2);
    }
    sub_60905500(a1, &v14, 128);
    if ( *(_BYTE *)v15 )
    {
      v9 = sub_604277CC(v4, 2);
      sub_60426E08(v4, &v14, v9, a2);
    }
    sub_60905500(a1, &v14, 128);
    if ( *(_BYTE *)v15 )
    {
      v10 = sub_604277CC(v4, 3);
      sub_60426E08(v4, &v14, v10, a2);
    }
    sub_60905500(a1, &v14, 128);
    if ( *(_BYTE *)v15 )
    {
      v11 = sub_604277CC(v4, 4);
      sub_60426E08(v4, &v14, v11, a2);
    }
    sub_60905500(a1, &v14, 128);
    if ( *(_BYTE *)v15 )
    {
      v12 = sub_604277CC(v4, 5);
      sub_60426E08(v4, &v14, v12, a2);
    }
    sub_60905500(a1, &v14, 128);
    if ( *(_BYTE *)v15 )
    {
      v13 = sub_604277CC(v4, 6);
      sub_60426E08(v4, &v14, v13, a2);
    }
    sub_60905500(a1, &v14, 128);
    return sub_6042697C(v4, &v14, a2);
  }
  return result;
}
