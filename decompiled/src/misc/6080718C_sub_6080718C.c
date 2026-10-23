/* sub_6080718C
 * address: 0x6080718C   size: 924   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080718C(int a1, void **a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r7
  int v11; // r0
  int v12; // r0
  int v13; // r4
  int v14; // r0
  int v15; // r4
  int v16; // r0
  int v17; // r4
  _DWORD *v18; // r0
  int v19; // r0
  void *v20; // r0
  int v21; // r0
  MovingSoundActor *v22; // r0
  MovingSoundActor *v23; // r9
  MovingSoundActor *v24; // r4
  MovingSoundActor *v25; // r0
  void *v26; // r0
  unsigned int v27; // r4
  int v28; // r6
  int v29; // r0
  int v30; // r0
  int v31; // r0
  nn__oe *v32; // r0
  int (**v34)(); // [sp+8h] [bp-130h] BYREF
  const char *v35; // [sp+Ch] [bp-12Ch]
  char dest[296]; // [sp+10h] [bp-128h] BYREF

  strncpy(dest, "AudioTvOutput", 0x100u);
  nn__audio__SetAudioDeviceOutputVolume(dest);
  strncpy(dest, "AudioBuiltInSpeakerOutput", 0x100u);
  nn__audio__SetAudioDeviceOutputVolume(dest);
  strncpy(dest, "AudioStereoJackOutput", 0x100u);
  nn__audio__SetAudioDeviceOutputVolume(dest);
  strncpy(dest, "AudioUsbDeviceOutput", 0x100u);
  nn__audio__SetAudioDeviceOutputVolume(dest);
  v4 = sub_60805BB8(a1);
  sub_608DDBC4(v4, a2[2], a2[3]);
  v5 = sub_60805BB8(a1);
  sub_608DDBBC(v5, *a2);
  v6 = sub_60805BB8(a1);
  v7 = 1;
  sub_608DDBD0(v6, 1, 1);
  v8 = sub_60805BB8(a1);
  sub_608DDBDC(v8, 48000);
  v9 = sub_60805BB8(a1);
  sub_60806174(v9, 0, 1);
  v10 = sub_609101C0(0);
  v11 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a2 + 60))(*a2);
  v34 = &sead__SafeStringBase__vtable;
  v35 = "SoundHeapSub";
  v12 = sead__ExpHeap__create(
          (v11 - 10485760 + ((unsigned int)((v11 - 10485760) >> 31) >> 20)) & 0xFFFFF000,
          (int)&v34,
          *a2,
          4096,
          1,
          0);
  v13 = v12;
  if ( v12 )
    v7 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v12);
  sub_609103D4(v10, *(_DWORD **)(a1 + 24), v13);
  if ( v7 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v7);
  v14 = sub_60805BB8(a1);
  sub_608061B8(v14, (int)*a2);
  v15 = sub_60805BA8(a1);
  v16 = sub_60805BB8(a1);
  sub_608AB158(v15 + 8, v16 + 196);
  sub_60815080(0);
  STRM_BGM_DUMMY_ref(0);
  v34 = &sead__SafeStringBase__vtable;
  v35 = "FxHeap";
  v17 = sead__ExpHeap__create(1056768, (int)&v34, *a2, 4, 1, 0);
  FIELD_U32(a1, 1044) = v17;
  v18 = (_DWORD *)operator_new(0x3Cu);
  FIELD_U32(a1, 1048) = sub_608DD7BC(v18, 0, v17);
  v19 = sub_60805BB0(a1);
  sub_608DC198(v19, *a2);
  FIELD_U8(a1, 200) = 1;
  if ( (*((_DWORD *)sub_608065A0() + 32) | 1) == 3 )
  {
    v20 = sub_608065A0();
    sub_608B62CC(v20, 1, 0);
  }
  v21 = operator_new(1u);
  FIELD_U32(a1, 156) = nullsub_61(v21);
  v22 = (MovingSoundActor *)operator_new(0x2710u);
  v23 = v22;
  v24 = (MovingSoundActor *)((char *)v22 + 10000);
  do
  {
    v25 = MovingSoundActor_ctor(v22, 2, 1);
    *(_DWORD *)FIELD_U8(v25, 0x0) = off_60C28128;
    v25[1].handles[0]._.containingHeap = 0;
    v25[1].handles[0].handle = 0;
    v25[1].handles[0].unk = 0.0;
    LOBYTE(v25[1].handles[1]._.vtable) = 0;
    v22 = (MovingSoundActor *)((char *)v25 + 500);
  }
  while ( v22 != v24 );
  FIELD_U32(a1, 160) = v23;
  v26 = sub_608065A0();
  v27 = 0;
  sub_608B6A64(v26, 0);
  v28 = sub_60805BA8(a1);
  if ( FIELD_U32(v28, 40) )
  {
    do
    {
      v29 = sub_60805BA8(a1);
      sub_608DC930(FIELD_U32(v29, 456));
      v30 = sub_608AB144(v28 + 8, v27 | 0x4000000);
      sub_608ACAFC(v30, 0);
      ++v27;
    }
    while ( v27 < FIELD_U32(v28, 40) );
  }
  sub_60807574((_DWORD *)a1);
  v31 = operator_new_8DE25C(0x360u, *a2, 4);
  FIELD_U32(a1, 88) = sub_608075F8(v31);
  v32 = (nn__oe *)sub_6080E7D0();
  return nn__oe__SetExpectedVolumeBalance(v32, 1.0, 1.0);
}
