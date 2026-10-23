/* SoundSystem_createInstance
 * address: 0x60806F40   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SoundSystem_createInstance(int a1)
{
  int this; // r4
  _DWORD *v3; // r0
  int v4; // r1
  _QWORD v6[3]; // [sp+0h] [bp-18h] BYREF

  this = SoundSystem_instance;
  if ( !SoundSystem_instance )
  {
    this = operator_new_8DE2C8(0x420u, a1, 8);
    v3 = sead__IDisposer__ctor((_DWORD *)(this + 28), a1, 3u);
    FIELD_U32(this, 28) = off_60C280CC;
    dword_60CC6AF4 = (int)v3;
    SoundSystem_createInstance_helper((_DWORD *)this);
    *(_DWORD *)this = off_60C280DC;
    memset((void *)(this + 48), 0, 44);
    nn__os__GetSystemTick((nn__os *)v6);
    FIELD_U64(this, 104) = v6[0];
    nn__os__GetSystemTick((nn__os *)v6);
    v4 = HIDWORD(v6[0]);
    FIELD_U64(this, 128) = v6[0];
    sub_608AD2C8(this + 212, v4);
    FIELD_U16(this, 312) = 0;
    FIELD_U8(this, 314) = 1;
    nn_atk_MemorySoundArchive_ctor(this + 0x13C);
    FIELD_U8(this, 44) = 0;
    FIELD_U8(this, 45) = 0;
    FIELD_U8(this, 47) = 0;
    FIELD_U32(this, 100) = -1;
    nn__os__GetSystemTick((nn__os *)v6);
    FIELD_U64(this, 104) = v6[0];
    FIELD_U32(this, 112) = 1065353216;
    FIELD_U32(this, 116) = 0;
    FIELD_U8(this, 120) = 0;
    FIELD_U8(this, 146) = 0;
    FIELD_U32(this, 148) = 0;
    FIELD_U32(this, 152) = 0;
    FIELD_U8(this, 144) = 0;
    FIELD_U8(this, 145) = 0;
    FIELD_U8(this, 121) = 0;
    FIELD_U8(this, 140) = 0;
    FIELD_U16(this, 142) = -1;
    FIELD_U32(this, 136) = 0;
    FIELD_U8(this, 184) = 0;
    FIELD_U8(this, 192) = 0;
    FIELD_U8(this, 176) = 0;
    FIELD_U32(this, 172) = 0;
    FIELD_U32(this, 168) = 0;
    FIELD_U32(this, 164) = 0;
    FIELD_U32(this, 196) = 1;
    FIELD_U32(this, 92) = 0;
    FIELD_U32(this, 96) = 0;
    FIELD_U32(this, 180) = 0;
    SoundSystem_instance = this;
  }
  return this;
}
