/* sub_6097C8D4
 * address: 0x6097C8D4   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097C8D4(int a1, int a2, int a3)
{
  char v5; // r6
  const char **v6; // r0
  char *v7; // r0
  int i; // r1
  int j; // r1
  int k; // r1
  const char **v11; // r0
  int v12; // r0
  int (**v14)(); // [sp+0h] [bp-28h] BYREF
  char *v15; // [sp+4h] [bp-24h]

  ((void (*)(void))loc_60857B80)();
  v5 = 0;
  *(_DWORD *)a1 = &off_60C5F4B0;
  FIELD_U32(a1, 172) = 0;
  FIELD_U16(a1, 176) = 256;
  FIELD_U8(a1, 178) = 0;
  v6 = sub_6085982C(a1, "AlignOn");
  if ( v6 )
  {
    v7 = (char *)&v6[1][(_DWORD)v6];
    v14 = &sead__SafeStringBase__vtable;
    v15 = v7;
    if ( v7 == "Center" )
      goto LABEL_19;
    for ( i = 0; i < 524289; ++i )
    {
      if ( v7[i] != aCenter_0[i] )
        break;
      if ( !v7[i] )
      {
        v5 = 0;
        goto LABEL_19;
      }
    }
    v5 = 1;
    if ( v7 == "Left" )
      goto LABEL_19;
    for ( j = 0; j < 524289; ++j )
    {
      if ( v7[j] != aLeft[j] )
        break;
      if ( !v7[j] )
        goto LABEL_19;
    }
    sead__SafeStringBase__assureTerminationImpl_const();
    ((void (__fastcall *)(int (***)()))v14[3])(&v14);
    v5 = 2;
    if ( v15 == "Right" )
    {
LABEL_19:
      FIELD_U8(a1, 176) = v5;
    }
    else
    {
      for ( k = 0; k < 524289; ++k )
      {
        if ( v15[k] != aRight[k] )
          break;
        if ( !v15[k] )
          goto LABEL_19;
      }
    }
  }
  if ( sub_6085982C(a1, "AlignExtendEdge") )
    FIELD_U8(a1, 178) = 1;
  v11 = sub_6085982C(a1, "AlignDefaultMargin");
  if ( v11 )
    FIELD_U32(a1, 172) = *(_DWORD *)&v11[1][(_DWORD)v11];
  v12 = *(_DWORD *)(FIELD_U32(a3, 24) + 72);
  if ( v12 )
    FIELD_U8(v12, 130) |= 0x20u;
  return a1;
}
