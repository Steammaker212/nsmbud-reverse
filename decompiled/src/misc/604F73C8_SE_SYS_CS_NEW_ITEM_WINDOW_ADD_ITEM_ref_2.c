/* SE_SYS_CS_NEW_ITEM_WINDOW_ADD_ITEM_ref_2
 * address: 0x604F73C8   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CS_NEW_ITEM_WINDOW_ADD_ITEM_ref_2(_DWORD *a1)
{
  int v1; // r1
  _BYTE *v2; // r2
  int v3; // r4

  v1 = *a1;
  if ( *(_BYTE *)(*a1 + 3597) )
  {
    v2 = (_BYTE *)(v1 + 3580);
    if ( !FIELD_U8(v1, 3580) )
    {
      v3 = 0;
      goto LABEL_31;
    }
  }
  v1 = a1[1];
  if ( FIELD_U8(v1, 3597) )
  {
    v2 = (_BYTE *)(v1 + 3580);
    if ( !FIELD_U8(v1, 3580) )
    {
      v3 = 1;
      goto LABEL_31;
    }
  }
  v1 = a1[2];
  if ( FIELD_U8(v1, 3597) )
  {
    v2 = (_BYTE *)(v1 + 3580);
    if ( !FIELD_U8(v1, 3580) )
    {
      v3 = 2;
      goto LABEL_31;
    }
  }
  v1 = a1[3];
  if ( FIELD_U8(v1, 3597) )
  {
    v2 = (_BYTE *)(v1 + 3580);
    if ( !FIELD_U8(v1, 3580) )
    {
      v3 = 3;
      goto LABEL_31;
    }
  }
  v1 = a1[4];
  if ( FIELD_U8(v1, 3597) )
  {
    v2 = (_BYTE *)(v1 + 3580);
    if ( !FIELD_U8(v1, 3580) )
    {
      v3 = 4;
      goto LABEL_31;
    }
  }
  v1 = a1[5];
  if ( FIELD_U8(v1, 3597) )
  {
    v2 = (_BYTE *)(v1 + 3580);
    if ( !FIELD_U8(v1, 3580) )
    {
      v3 = 5;
      goto LABEL_31;
    }
  }
  v1 = a1[6];
  if ( FIELD_U8(v1, 3597) )
  {
    v2 = (_BYTE *)(v1 + 3580);
    if ( !FIELD_U8(v1, 3580) )
    {
      v3 = 6;
      goto LABEL_31;
    }
  }
  v1 = a1[7];
  if ( FIELD_U8(v1, 3597) )
  {
    v2 = (_BYTE *)(v1 + 3580);
    if ( !FIELD_U8(v1, 3580) )
    {
      v3 = 7;
      goto LABEL_31;
    }
  }
  v1 = a1[8];
  if ( FIELD_U8(v1, 3597) )
  {
    v2 = (_BYTE *)(v1 + 3580);
    if ( !FIELD_U8(v1, 3580) )
    {
      v3 = 8;
      goto LABEL_31;
    }
  }
  v1 = a1[9];
  v3 = 10;
  if ( FIELD_U8(v1, 3597) )
  {
    v2 = (_BYTE *)(v1 + 3580);
    if ( !FIELD_U8(v1, 3580) )
    {
      v3 = 9;
LABEL_31:
      *v2 = 1;
      *(_BYTE *)(FIELD_U32(v1, 3584) + 64) |= 1u;
      sub_60807EF0(SoundSystem_instance, "SE_SYS_CS_NEW_ITEM_WINDOW_ADD_ITEM", 0, 1);
    }
  }
  return v3;
}
