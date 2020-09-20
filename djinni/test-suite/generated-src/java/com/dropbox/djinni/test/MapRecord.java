// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

package com.dropbox.djinni.test;

import java.util.HashMap;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

public class MapRecord implements android.os.Parcelable {


    /*package*/ final HashMap<String, Long> mMap;

    /*package*/ final HashMap<Integer, Integer> mImap;

    public MapRecord(
            @Nonnull HashMap<String, Long> map,
            @Nonnull HashMap<Integer, Integer> imap) {
        this.mMap = map;
        this.mImap = imap;
    }

    @Nonnull
    public HashMap<String, Long> getMap() {
        return mMap;
    }

    @Nonnull
    public HashMap<Integer, Integer> getImap() {
        return mImap;
    }

    @Override
    public String toString() {
        return "MapRecord{" +
                "mMap=" + mMap +
                "," + "mImap=" + mImap +
        "}";
    }


    public static final android.os.Parcelable.Creator<MapRecord> CREATOR
        = new android.os.Parcelable.Creator<MapRecord>() {
        @Override
        public MapRecord createFromParcel(android.os.Parcel in) {
            return new MapRecord(in);
        }

        @Override
        public MapRecord[] newArray(int size) {
            return new MapRecord[size];
        }
    };

    public MapRecord(android.os.Parcel in) {
        this.mMap = new HashMap<String, Long>();
        in.readMap(this.mMap, getClass().getClassLoader());
        this.mImap = new HashMap<Integer, Integer>();
        in.readMap(this.mImap, getClass().getClassLoader());
    }

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public void writeToParcel(android.os.Parcel out, int flags) {
        out.writeMap(this.mMap);
        out.writeMap(this.mImap);
    }

}