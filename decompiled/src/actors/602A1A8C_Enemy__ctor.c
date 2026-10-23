/* Enemy__ctor
 * address: 0x602A1A8C   size: 304   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Enemy__ctor(Enemy *this, ActorBuildInfo *buildInfo)
{
  MultiStateActor__ctor(&FIELD_U32(this, 0x0), buildInfo);
  FIELD_U32(this, 0x0) = (int)&Enemy__vtable;
  FIELD_F32(this, 0x17D8) = 1.5;
  FIELD_F32(this, 0x17DC) = 3.9;
  FIELD_F32(this, 0x17E0) = -4.0;
  FIELD_F32(this, 0x17E4) = -0.24375;
  FIELD_U32(this, 0x17E8) = 0;
  FIELD_U32(this, 0x17EC) = 255;
  FIELD_U32(this, 0x17F0) = 0;
  FIELD_U32(this, 0x17F4) = 255;
  FIELD_U8(this, 0x17F8) = 0;
  FIELD_U32(this, 0x1802) = 0;
  FIELD_U32(this, 0x1800) = 0;
  FIELD_U32(this, 0x17FE) = 0;
  FIELD_U32(this, 0x17FC) = 0;
  FIELD_U32(this, 0x1804) = 0;
  EnemyFreezeMgr_ctor(&FIELD_U32(this, 0x1808), this);
  sub_602A3FFC((int)&FIELD_U32(this, 0x1858), (int)this);
  FIELD_U32(this, 0x1878) = (int)this;
  FIELD_U32(this, 0x187C) = (int)off_60BE2BE4;
  FIELD_U8(this, 0x1880) = 0;
  FIELD_U8(this, 0x1890) = 0;
  FIELD_U32(this, 0x188C) = 0;
  FIELD_U32(this, 0x1888) = 0;
  FIELD_U32(this, 0x1884) = 0;
  sub_60285434(&FIELD_U32(this, 0x1894));
  FIELD_U8(this, 0x1898) = 0;
  FIELD_U8(this, 0x1899) = 0;
  FIELD_U8(this, 0x189A) = 8;
  FIELD_F32(this, 0x64) = -0.1875;
  FIELD_F32(this, 0x84) = 0.0;
  FIELD_F32(this, 0x88) = -4.0;
  FIELD_F32(this, 0x8C) = 0.0;
  FIELD_U8(this, 0x215) = 3;
  FIELD_U32(this, 0x280) = (int)&FIELD_U32(this, 0x1858);
  return this;
}
