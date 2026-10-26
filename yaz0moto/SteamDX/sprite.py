"""Miyamoto sprite previews for the Project-SteamDX custom actor patch.

The patch archive contains actor metadata but no preview images. These classes
draw small, distinct editor markers in code, so the patch can be used without
installing a separate image pack. Merge ``ImageClasses`` into the editor's
sprite image registry.
"""

from PyQt5 import QtCore, QtGui
import spritelib as SLib

Qt = QtCore.Qt
ImageCache = SLib.ImageCache


class _SteamDXMarker(SLib.SpriteImage_Static):
    """Simple generated marker with a short label for a custom actor."""

    label = "?"
    fill = "#4b5563"
    accent = "#ffffff"

    @classmethod
    def _make_image(cls):
        pixmap = QtGui.QPixmap(48, 48)
        pixmap.fill(Qt.transparent)
        painter = QtGui.QPainter(pixmap)
        painter.setRenderHint(QtGui.QPainter.Antialiasing, True)
        painter.setPen(QtGui.QPen(QtGui.QColor("#172033"), 2))
        painter.setBrush(QtGui.QColor(cls.fill))
        painter.drawRoundedRect(3, 3, 42, 42, 10, 10)
        painter.setPen(QtGui.QColor(cls.accent))
        font = QtGui.QFont()
        font.setBold(True)
        font.setPixelSize(17 if len(cls.label) < 3 else 13)
        painter.setFont(font)
        painter.drawText(pixmap.rect(), Qt.AlignCenter, cls.label)
        painter.end()
        return pixmap

    def __init__(self, parent):
        super().__init__(parent, 3.75, self._make_image(), (0, 0))

    @staticmethod
    def loadImages():
        # Artwork is drawn at runtime; no external image files are needed.
        pass


class SpriteImage_AngrySun(_SteamDXMarker):  # 724
    label = "SUN"
    fill = "#e58a18"
    accent = "#fff4c2"


class SpriteImage_MadMoon(_SteamDXMarker):  # 725
    label = "MOON"
    fill = "#4c78b8"
    accent = "#eaf4ff"


class SpriteImage_ActorSpawner(_SteamDXMarker):  # 726
    label = "SP"
    fill = "#7b4ca0"


class SpriteImage_LightSource(_SteamDXMarker):  # 728
    label = "L"
    fill = "#d2a51e"
    accent = "#fffbe1"


class SpriteImage_EffectSpawner(_SteamDXMarker):  # 730
    label = "FX"
    fill = "#b84f83"


class SpriteImage_FakeStarCoin(_SteamDXMarker):  # 731
    label = "★"
    fill = "#d8a822"
    accent = "#fff6bf"


class SpriteImage_MagicLift(_SteamDXMarker):  # 732
    label = "ML"
    fill = "#358c83"


class SpriteImage_HammerFlower(_SteamDXMarker):  # 734 (hammer_suit mod)
    label = "HF"
    fill = "#6b4a2b"
    accent = "#ffd166"


class SpriteImage_Bee(_SteamDXMarker):  # 735 (bee mod)
    label = "BEE"
    fill = "#e0b100"
    accent = "#2b2100"


class SpriteImage_PAcorn(_SteamDXMarker):  # 736 (p_acorn mod)
    label = "P"
    fill = "#8a4b14"
    accent = "#ffe08a"


class SpriteImage_ShyGuy(_SteamDXMarker):  # 737 (shy_guy mod)
    label = "SG"
    fill = "#a8323a"
    accent = "#ffe9ea"


class SpriteImage_CustomSpawner(_SteamDXMarker):  # 738 (custom_spawner mod)
    label = "SP+"
    fill = "#4a5ea0"
    accent = "#e6ecff"


# 727, 729 and 733 are intentionally absent: patch metadata documents these
# as unimplemented actors without a usable Profile.
ImageClasses = {
    724: SpriteImage_AngrySun,
    725: SpriteImage_MadMoon,
    726: SpriteImage_ActorSpawner,
    728: SpriteImage_LightSource,
    730: SpriteImage_EffectSpawner,
    731: SpriteImage_FakeStarCoin,
    732: SpriteImage_MagicLift,
    734: SpriteImage_HammerFlower,
    735: SpriteImage_Bee,
    736: SpriteImage_PAcorn,
    737: SpriteImage_ShyGuy,
    738: SpriteImage_CustomSpawner,
}
