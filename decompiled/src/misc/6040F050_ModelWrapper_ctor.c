/* ModelWrapper_ctor
 * address: 0x6040F050   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall ModelWrapper_ctor(
        ModelWrapper *this,
        void *model,
        signed int numSklAnims,
        signed int numTexmAnims,
        signed int numShuAnims,
        signed int numVisAnims,
        signed int numShaAnims)
{
  void **v11; // r0
  void **v12; // r0
  void **v13; // r0
  void **v14; // r0
  void **v15; // r0

  FIELD_U32(this, 0x0) = model;
  memset(&FIELD_U32(this, 0x4), 0, 0x2C);
  if ( numSklAnims )
  {
    v11 = (void **)(*(int (__fastcall **)(void *))(*(_DWORD *)model + 0xC0))(model);
    if ( numSklAnims >= 1 )
    {
      if ( v11 )
      {
        FIELD_U32(this, 0x8).count = numSklAnims;
        FIELD_U32(this, 0x8).animations = v11;
      }
    }
  }
  if ( numTexmAnims )
  {
    v12 = (void **)(*(int (__fastcall **)(void *))(*(_DWORD *)model + 0xC4))(model);
    if ( numTexmAnims >= 1 )
    {
      if ( v12 )
      {
        FIELD_U32(this, 0x10).count = numTexmAnims;
        FIELD_U32(this, 0x10).animations = v12;
      }
    }
  }
  if ( numShuAnims )
  {
    v13 = (void **)(*(int (__fastcall **)(void *))(*(_DWORD *)model + 0xC8))(model);
    if ( numShuAnims >= 1 )
    {
      if ( v13 )
      {
        FIELD_U32(this, 0x18).count = numShuAnims;
        FIELD_U32(this, 0x18).animations = v13;
      }
    }
  }
  if ( numVisAnims )
  {
    v14 = (void **)(*(int (__fastcall **)(void *))(*(_DWORD *)model + 0xCC))(model);
    if ( numVisAnims >= 1 )
    {
      if ( v14 )
      {
        FIELD_U32(this, 0x20).count = numVisAnims;
        FIELD_U32(this, 0x20).animations = v14;
      }
    }
  }
  if ( numShaAnims )
  {
    v15 = (void **)(*(int (__fastcall **)(void *))(*(_DWORD *)model + 0xD0))(model);
    if ( numShaAnims >= 1 )
    {
      if ( v15 )
      {
        FIELD_U32(this, 0x28).count = numShaAnims;
        FIELD_U32(this, 0x28).animations = v15;
      }
    }
  }
  return this;
}
